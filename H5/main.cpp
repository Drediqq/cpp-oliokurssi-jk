#include <iostream>
#include "src/classB.h"
#include "src/classA1.h"
#include "src/classA2.h"

int main() {
    ClassB objB;
    objB.setInfo("Olion B asettama info");
    
    ClassA1 objA1(objB);
    objA1.setBinfo("Olion objA1 asettama info");
    
    std::cout << "objB: " << objB.getInfo() << std::endl;
    std::cout << "objA1: " << objA1.getBinfo() << std::endl;

    ClassB &refB = objB; 
    
    ClassA2 objA2(refB);
    objA2.setBinfo("Olion Agr asettama info");
    std::cout << "objB: " << objB.getInfo() << std::endl;
    std::cout << "objA2 " << objA2.getBinfo() << std::endl;
    std::cout << std::endl;
}