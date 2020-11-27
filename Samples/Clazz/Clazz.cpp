
#include "Learning.hpp"
#include "NormalClass.hpp"
#include "KeyWordClass.hpp"
#include "Component.hpp"


NormalClass getTest1()
{
    return NormalClass();
}

NormalClass getTest2()
{
    NormalClass normalClass;
    return normalClass;
}

int main()
{
//    std::cout << "-------RVO-------" << std::endl;
//    std::cout << "-------1-------" << std::endl;
//    auto obj1 = getTest1();
//    LOGNOMSG("MAIN", "1 : %p", &obj1);
//    std::cout << "-------2-------" << std::endl;
//    auto obj2 = std::move(getTest1());
//    LOGNOMSG("MAIN", "2 : %p", &obj2);
//    std::cout << "-------3-------" << std::endl;
//    NormalClass obj3;
//    obj3 = getTest1();
//    LOGNOMSG("MAIN", "3 : %p", &obj3);
//    std::cout << "-------4-------" << std::endl;
//    NormalClass obj4;
//    obj4 = std::move(getTest1());
//    LOGNOMSG("MAIN", "4 : %p", &obj4);
//    std::cout << "-------NRVO-------" << std::endl;
//    std::cout << "-------5-------" << std::endl;
//    auto obj5 = getTest2();
//    LOGNOMSG("MAIN", "5 : %p", &obj5);
//    std::cout << "-------6-------" << std::endl;
//    auto obj6 = std::move(getTest2());
//    LOGNOMSG("MAIN", "6 : %p", &obj6);
//    std::cout << "-------7-------" << std::endl;
//    NormalClass obj7;
//    obj7 = getTest2();
//    LOGNOMSG("MAIN", "7 : %p", &obj7);
//    std::cout << "-------8-------" << std::endl;
//    NormalClass obj8;
//    obj8 = std::move(getTest2());
//    LOGNOMSG("MAIN", "8 : %p", &obj8);
//    LOGNOMSG("MAIN", "end");

//    KeyWordClass keyWordClass(1);
//    KeyWordClass keyWordClass2 = 2;
//    KeyWordClass keyWordClass3;
//    keyWordClass = 3;

    /**
     * 泛型初始化的问题
     */
    ComponentClass componentClass;
    componentClass.init();
    const NormalClass& one = componentClass.getOne();
    const NormalClass& two = componentClass.getTwo();
    const NormalClass& three = componentClass.getThree();
    NormalClass& four = componentClass.getFour();

    four.value = 1;
//    componentClass.getOne();
//    componentClass.getTwo();
//    componentClass.getThree();
//    componentClass.getFour();
//    LOGNOMSG("ComponentClass", "getOne  %p", &one);
//    LOGNOMSG("ComponentClass", "getTwo  %p", &two);
    return 0;

}