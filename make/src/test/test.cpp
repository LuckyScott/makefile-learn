#include "test.h"
#include "mycomm.h"
#include <iostream>


void TestSin()
{
    std::cout << "Sin(30)=" << Comm::Sin(30) << std::endl;
    std::cout << "Sin(45)=" << Comm::Sin(45) << std::endl;
    std::cout << "Sin(90)=" << Comm::Sin(90) << std::endl;
}


void TestCos()
{
    std::cout << "Cos(0)=" << Comm::Cos(0) << std::endl;
    std::cout << "Cos(45)=" << Comm::Cos(45) << std::endl;
    std::cout << "Cos(60)=" << Comm::Cos(60) << std::endl;
}


void RunTest()
{
    TestSin();
    TestCos();
}