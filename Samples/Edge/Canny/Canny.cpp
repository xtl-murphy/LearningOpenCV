
#include "Learning.hpp"

int main()
{

    Mat image = imread("..\\Resources\\2.jpg", IMREAD_COLOR);
    Mat smallImage;
    Mat cannyImage;
//    cv::resize(image, smallImage, Size(image.size().width * 0.5, image.size().height * 0.5));
    Delta deltaUpdate;
    deltaUpdate.Update();
    cv::Canny(image, cannyImage, 50.0f, 150.0f, 3);
    deltaUpdate.Update();
    deltaUpdate.PrintSeconds("Canny");
    imshow("image", cannyImage);
    imshow("src", image);
    waitKey();
    return 0;
}
