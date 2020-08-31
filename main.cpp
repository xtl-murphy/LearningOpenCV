#include <iostream>

//#define STB_IMAGE_IMPLEMENTATION
//#include "stb/stb_image.h"

#include "Learning.hpp"

int main()
{
    cv::Mat src = cv::imread("D:\\work\\Clion\\LearningOpenCV\\jiuling.jpg", IMREAD_COLOR);
    cv::imshow("src", src);
    cv::waitKey();
    return 0;
}
