
/**
 * Component
 * @version 1.0
 * @since 1.0
 * <p>
 * Created by Murphy at 2020/11/26 23:35
 **/

#include "Learning.hpp"
#include "NormalClass.hpp"

class ComponentClass
{
public:
    ComponentClass()
    {
        LOGNOMSG("Component", "Component() : %p", this);
    }

    ~ComponentClass()
    {
        LOGNOMSG("Component", "~Component() : %p", this);
    }

    void init()
    {
        LOGNOMSG("Component", "init() : %p", this);
        this->list.resize(2);
    }

    const NormalClass& getOne()
    {
        //返回副本
        LOGNOMSG("Component", "getOne()");
        return this->list[0];
    }

    NormalClass getTwo()
    {
        LOGNOMSG("Component", "getTwo()");
        return item;
    }

    const NormalClass& getThree()
    {
        LOGNOMSG("Component", "getThree()");
        return item;
    }

    NormalClass& getFour()
    {
        LOGNOMSG("Component", "getFour()");
        return item;
    }

    NormalClass getFive()
    {
        LOGNOMSG("Component", "getFive()");
        return item;
    }
private:
    std::vector<NormalClass> list;
    NormalClass item;
};