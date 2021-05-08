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

using namespace std;

void test(vector<vector<bool>>& list)
{
    LOGE("Flag", "xxx %d , %d", list[0][0] ? 1 : 0, list[0][0]);
    list[0][0] = 1;
    LOGE("Flag", "xxx %d , %d", list[0][0] ? 1 : 0, list[0][0]);
}

enum TrimState
{
    kState_Has_Start  = 1 << 0,
    kState_Has_End    = 1 << 1,
    kState_Has_OFFSET = 1 << 2
};

int main()
{
//    Mat image = imread("..\\Resources\\jiuling.jpg", IMREAD_COLOR);
//    imshow("image", image);
//
//    std::unique_ptr<LessonOne> ptr = std::make_unique<LessonOne>();
////    std::unique_ptr<LessonOne> ptr;
//    if (ptr)
//    {
//        LOGV("Sample", "work 1: %d", ptr.operator bool());
//    }
//    else
//    {
//        LOGV("Sample", "work 2: %d", ptr.operator bool());
//    }
//
////    ptr->work();
////    ptr.reset();
//    LOGV("Sample", "work: %d", ptr.operator bool());
//    cv::waitKey();

    int flags = 0;
    flags |= TrimState::kState_Has_Start;
//    flags |= TrimState::kState_Has_End;
    flags |= TrimState::kState_Has_OFFSET;



//    LOGE("Flag", "%d, hasStart(%d), hasEnd(%d), hasOffset(%d)", flags,
//            flags&TrimState::kState_Has_Start,
//            flags&TrimState::kState_Has_End,
//            flags&TrimState::kState_Has_OFFSET);

    vector<vector<bool>> list;
    vector<bool> sub;
    sub.push_back(false);
    list.push_back(sub);
    test(list);

    return 0;
}
