

#include "Learning.hpp"

void index_method(const cv::Mat& mat, cv::Mat& dst)
{
    Delta deltaUpdate;
    deltaUpdate.Update();

    dst.create(mat.size(), mat.type());

    int div = 10;
    for (int row = 0; row < mat.rows; row++)
    {
        for (int col = 0; col < mat.cols; col++)
        {
            cv::Vec4b uc_pixel = mat.at<cv::Vec4b>(row, col);
            int a = uc_pixel[0];
            int b = uc_pixel[1];
            int c = uc_pixel[2];
            int d = uc_pixel[3];


            dst.at<Vec4b>(row,col)[0] = a;
            dst.at<Vec4b>(row,col)[1] = b;
            dst.at<Vec4b>(row,col)[2] = c;
            dst.at<Vec4b>(row,col)[3] = d;
        }
    }
    
    deltaUpdate.Update();
    deltaUpdate.PrintSeconds("index_method");
}

void index_method2(const cv::Mat& mat, cv::Mat& dst)
{
    Delta deltaUpdate;
    deltaUpdate.Update();

    dst.create(mat.size(), mat.type());

    for (int row = 0; row < mat.rows; row++)
    {
        const uchar* inData = mat.ptr<uchar>(row);
        uchar* outData = dst.ptr<uchar>(row);
        for (int col = 0; col < mat.cols * mat.channels(); col++)
        {
            outData[col] = inData[col];
        }
    }

    deltaUpdate.Update();
    deltaUpdate.PrintSeconds("index_method2");
}

void index_method3(const cv::Mat& mat, cv::Mat& dst)
{
    Delta deltaUpdate;
    deltaUpdate.Update();

    dst.create(mat.size(), mat.type());

    for (int row = 0; row < mat.rows; row++)
    {
        const uchar* inData = mat.ptr<uchar>(row);
        uchar* outData = dst.ptr<uchar>(row);
        for (int col = 0; col < mat.cols * mat.channels(); col++)
        {
            *outData++ = *inData++;
        }
    }

    deltaUpdate.Update();
    deltaUpdate.PrintSeconds("index_method3");
}

void index_method4(const cv::Mat& mat, cv::Mat& dst)
{
    Delta deltaUpdate;
    deltaUpdate.Update();

    dst.create(mat.size(), mat.type());

    int step= mat.step;

    uchar* srcdata = (uchar*)mat.data;
    uchar* dstdata = (uchar*)dst.data;

    for (int row = 0; row < mat.rows; row++)
    {
        for (int col = 0; col < mat.cols * mat.channels(); col++)
        {
            *(dstdata + col) = *(srcdata + col);
        }
        srcdata += step;
        dstdata += step;
    }

    deltaUpdate.Update();
    deltaUpdate.PrintSeconds("index_method4");
}

void index_method5(const cv::Mat& mat, cv::Mat& dst)
{
    Delta deltaUpdate;
    deltaUpdate.Update();

    dst.create(mat.size(), mat.type());

    auto it = mat.begin<cv::Vec4b>();
    auto itend = mat.end<cv::Vec4b>();
    auto it_dst = dst.end<cv::Vec4b>();
    for ( ; it!= itend; ++it) {
        (*it_dst)[0] = (*it)[0];
        (*it_dst)[1] = (*it)[1];
        (*it_dst)[2] = (*it)[2];
    }

    deltaUpdate.Update();
    deltaUpdate.PrintSeconds("index_method5");
}

void index_method6(const cv::Mat& mat, cv::Mat& dst)
{
    Delta deltaUpdate;
    deltaUpdate.Update();

    dst.create(mat.size(), mat.type());

    for (int row = 0; row < mat.rows; row++)
    {
        const uchar* inData = mat.ptr<uchar>(row);
        uchar* outData = dst.ptr<uchar>(row);
        for (int col = 0; col < mat.cols; col++)
        {
            *outData++ = *inData++;
            *outData++ = *inData++;
            *outData++ = *inData++;
        }
    }

    deltaUpdate.Update();
    deltaUpdate.PrintSeconds("index_method6");
}

int main()
{
    Mat src = imread("D:\\work\\Clion\\LearningOpenCV\\Resources\\jiuling.jpg", IMREAD_COLOR);
    Mat dst;
    index_method(src, dst);
    Mat dst2;
    index_method2(src, dst2);
    Mat dst3;
    index_method3(src, dst3);
    Mat dst4;
    index_method4(src, dst4);
    Mat dst5;
    index_method5(src, dst5);
    Mat dst6;
    index_method6(src, dst6);

//    imshow("image", dst);
//    imshow("image2", dst2);
//    imshow("image3", dst3);
//    imshow("image4", dst4);
//    imshow("image5", dst5);
    imshow("image6", dst6);
    waitKey();
    return 0;
}
