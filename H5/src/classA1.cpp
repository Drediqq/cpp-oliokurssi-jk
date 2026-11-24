#include "classA1.h"

ClassA1::ClassA1(ClassB value):objectB(value)
{
}

std::string ClassA1::getBinfo()
{
    return objectB.getInfo();
}

void ClassA1::setBinfo(std::string value)
{
    objectB.setInfo(value);
}