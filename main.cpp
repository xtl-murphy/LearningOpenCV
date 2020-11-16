//#include <iostream>

//#define STB_IMAGE_IMPLEMENTATION
//#include "stb/stb_image.h"

#include "Learning.hpp"

class LessonOne
{
public:


    LessonOne()
    {
//        this->radius = std::rand();
        LOGV("Sample", "LessonOne %d", this->radius);
//        std::cout << "";
    }

    ~LessonOne()
    {
        LOGV("Sample", "~LessonOne %d", this->radius);
    }

    void work()
    {
        LOGV("Sample", "work: %d", this->radius);
    }

    int32_t radius;
};

int main()
{
    Mat image = imread("..\\Resources\\jiuling.jpg", IMREAD_COLOR);
    imshow("image", image);

    std::unique_ptr<LessonOne> ptr = std::make_unique<LessonOne>();
//    std::unique_ptr<LessonOne> ptr;
    if (ptr)
    {
        LOGV("Sample", "work 1: %d", ptr.operator bool());
    }
    else
    {
        LOGV("Sample", "work 2: %d", ptr.operator bool());
    }

//    ptr->work();
//    ptr.reset();
    LOGV("Sample", "work: %d", ptr.operator bool());
    cv::waitKey();
    return 0;
}
