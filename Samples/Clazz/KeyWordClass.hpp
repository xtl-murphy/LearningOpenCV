
/**
 * KeyWordClass
 * @version 1.0
 * @since 1.0
 * <p>
 * Created by murphy at 2020/11/15 下午3:25
 **/

#pragma once

#include "Learning.hpp"

class KeyWordClass
{
public:
    explicit KeyWordClass(int32_t _size) : size(_size)
    {
        LOGE("KeyWordClass", "KeyWordClass : %d, %p", _size, this);
    }

    ~KeyWordClass()
    {
        LOGNOMSG("KeyWordClass", "~KeyWordClass() : %p", this);

    }

    KeyWordClass(const KeyWordClass& obj)
    {
        LOGNOMSG("KeyWordClass", "KeyWordClass(const KeyWordClass& obj) : obj : %p, this : %p", &obj, this);
    }

private:
    int32_t size;
};