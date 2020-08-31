
/**
 * Delta
 * @version 1.0
 * @since 1.0
 * <p>
 * Created by Murphy at 2020/8/30 14:31
 **/

#pragma once

#include <cmath>
#include "Time.hpp"
#include "Learning.hpp"

using namespace Stitches;

class  Delta {
public:
    void Update()
    {
        currentFrameTime = Time::Now();
        change = currentFrameTime - lastFrameTime;
        lastFrameTime = currentFrameTime;
    }

    Time currentFrameTime;
    Time lastFrameTime;
    Time change;

    void PrintSeconds(const char* tag)
    {
        LOGE(tag, "%f s, %d ms", change.AsSeconds(), change.AsMilliseconds());
    }
};

class ChangePerSecond {
public:
    void Update(const Time &time)
    {
        valueTemp++;

        if (std::floor(time.AsSeconds()) > std::floor(valueTime.AsSeconds())) {
            value = valueTemp;
            valueTemp = 0;
        }

        valueTime = time;
    }

    uint32_t valueTemp = 0, value = 0;
    Time valueTime;
};
