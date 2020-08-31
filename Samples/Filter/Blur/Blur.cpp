

#include "Learning.hpp"

void blur(const Mat& src, Mat& dst, const Size& ksize)
{
    Delta deltaUpdate;
    deltaUpdate.Update();

    dst.create(src.size(), src.type());


    for (int row = 0; row < src.rows; row++)
    {
        const uchar* inData = src.ptr<uchar>(row);
        uchar* outData = dst.ptr<uchar>(row);

        if (row <= ksize.height || row >= src.rows - ksize.height)
            continue;

        for (int col = 0; col < src.cols; col++)
        {
            if (col <= ksize.width || col >= src.cols - ksize.width)
            {
                *outData++;
                *inData++;
                *outData++;
                *inData++;
                *outData++;
                *inData++;
                continue;
            }

            *outData++ = *inData++;
            *outData++ = *inData++;
            *outData++ = *inData++;
        }
    }

    deltaUpdate.Update();
    deltaUpdate.PrintSeconds("index_method3");
}

int main()
{

    Mat image = imread("..\\Resources\\jiuling.jpg", IMREAD_COLOR);
    Mat smallImage;
    Mat blurImage;
    resize(image, smallImage, Size(image.size().width * 0.5, image.size().height * 0.5));

    blur(smallImage, blurImage, Size(10, 10));

    imshow("image", blurImage);
    waitKey();
    return 0;
}
