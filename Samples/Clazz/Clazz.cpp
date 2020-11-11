
#include "Learning.hpp"

class Construct
{
public:
    Construct()
    {
        i = 0;
        LOGV("Clazz", "Construct :%p, %d", this, i);
    }

    Construct(const Construct& construct)
    {
        i = 1;
        LOGV("Clazz", "copy Construct :%p, %d", this, i);
    }

    ~Construct()
    {
        LOGV("Clazz", "~Construct :%p", this);
    }


private:
    int i;
};

Construct compute()
{
    Construct construct;
    LOGE("Clazz", "compute %p", &construct);
    return construct;
}

void compute2(Construct construct)
{
    LOGE("Clazz", "compute2 %p", &construct);
}

std::vector<Construct> getList()
{
    LOGE("Clazz", "getList");
    std::vector<Construct> list(2);
    return list;
}

void dealList(std::vector<Construct>& list)
{
    LOGE("Clazz", "dealList");
}

int main()
{
//    Construct construct1 = compute();
//    compute2(construct1);
    auto list = getList();
    LOGE("Clazz", "middle");
    dealList(list);
}