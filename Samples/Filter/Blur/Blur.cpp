

#include "Learning.hpp"

void blur(const Mat& src, const Mat& dst, const Size& ksize)
{
    for (int i = 0; i < src.rows; ++i)
    {
        for (int j = 0; j < src.cols; ++j)
        {
            
        }
    }
}

int main()
{

    Delta deltaUpdate;
    deltaUpdate.Update();

    Mat image = imread("D:\\work\\Clion\\LearningOpenCV\\Resources\\jiuling.jpg", IMREAD_COLOR);
    Mat smallImage;
    cv::blur(image, smallImage, Size(100, 100));

    deltaUpdate.Update();
    deltaUpdate.PrintSeconds("Blur");

    imshow("image", smallImage);
    waitKey();
    return 0;
}
