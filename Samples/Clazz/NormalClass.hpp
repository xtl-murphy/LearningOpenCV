
/**
 * NormalClass
 * @version 1.0
 * @since 1.0
 * <p>
 * Created by Murphy at 2020/11/12 10:06
 **/

#pragma once

#include "Learning.hpp"

class NormalClass
{
public:
    NormalClass()
    {
        LOGNOMSG("NormalClass", "NormalClass() : %p", this);
    }

    ~NormalClass()
    {
        LOGNOMSG("NormalClass", "~NormalClass() : %p", this);

    }

    NormalClass(const NormalClass& obj)
    {
        LOGNOMSG("NormalClass", "NormalClass(const NormalClass& obj) : obj : %p, this : %p", &obj, this);
    }

    NormalClass& operator=(const NormalClass& obj)
    {
        LOGNOMSG("NormalClass", "NormalClass& operator=(const NormalClass& obj) : obj : %p, this : %p", &obj, this);
        return *this;
    }

    NormalClass(NormalClass&& obj)
    {
        LOGNOMSG("NormalClass", "NormalClass(NormalClass&& obj) : obj : %p, this : %p", &obj, this);
    }

    NormalClass& operator=(NormalClass &&obj)
    {
        LOGNOMSG("NormalClass", "NormalClass& operator=(NormalClass &&obj) : obj : %p, this : %p", &obj, this);
        return *this;
    }

protected:
    float x, y;
};

class NormalClassList
{
public:
    NormalClassList()
    {
        LOGNOMSG("NormalClassList", "NormalClassList() : %p", this);
        list.resize(2);
    }

    ~NormalClassList()
    {
        LOGNOMSG("NormalClassList", "~NormalClassList() : %p", this);

    }

    NormalClassList(const NormalClassList& obj)
    {
        LOGNOMSG("NormalClassList", "NormalClassList(const NormalClassList& obj) : %p, %p", &obj, this);
    }

    const std::vector<NormalClass>& getList()
    {
        LOGNOMSG("NormalClassList", "getList() : %p", this);
        return this->list;
    }
private:
    std::vector<NormalClass> list;
};

class SubNormal : public NormalClass
{
public:
    SubNormal()
    {
        this->x = 10;
    }
};