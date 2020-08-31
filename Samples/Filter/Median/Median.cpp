
#include <Delta.hpp>
#include "Learning.hpp"

void blur(const Mat& src, const Mat& dst, const Size& ksize)
{
//    dst.create(src.size(),src.type());
}

int main()
{
    Delta deltaUpdate;

    deltaUpdate.Update();

    Mat image = imread("D:\\work\\Clion\\LearningOpenCV\\Resources\\jiuling.jpg", IMREAD_COLOR);
    Mat smallImage;
    cv::medianBlur(image, smallImage, 101);

    deltaUpdate.Update();
    deltaUpdate.PrintSeconds("Median");

    imshow("image", smallImage);
    waitKey();
    return 0;
}
