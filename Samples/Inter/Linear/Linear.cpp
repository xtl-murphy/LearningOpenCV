//
// Created by Murphy on 2020/8/30.
//

#include "Learning.hpp"

void resize(const Mat& src, const Mat& dst, const Size& dstSize)
{

}

int main()
{
    Mat image = imread("D:\\work\\Clion\\LearningOpenCV\\jiuling.jpg", IMREAD_COLOR);
    Mat smallImage;
    cv::resize(image, smallImage, Size(image.cols / 2, image.rows / 2));

    imshow("image", smallImage);
    waitKey();
    return 0;
}
