#include "classA2.h"

ClassA2::ClassA2(ClassB &value):refB(value)
{
}

std::string ClassA2::getBinfo()
{
    return refB.getInfo();
}

void ClassA2::setBinfo(std::string value)
{
    refB.setInfo(value);
}