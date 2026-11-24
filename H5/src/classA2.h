#ifndef CLASSA2_H
#define CLASSA2_H

#include "classB.h"

class ClassA2
{
private:
    ClassB &refB;
public:
    ClassA2(ClassB&); //Annetaan argumenttina B-luokan olion osoite
    std::string getBinfo();
    void setBinfo(std::string);
};

#endif