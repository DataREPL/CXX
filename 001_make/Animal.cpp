/**
 * @author      : Xue Yi (andy_xueyi@hotmail.com)
 * @file        : Animal
 * @created     : Monday Dec 02, 2019 14:07:07 CST
 */

#include "Animal.h"

Animal::Animal(int age, std::string name)
{
    std::cout << "Init Animal ..." << std::endl;
    age_ = age;
    name_ = name;
}

Animal::~Animal()
{
    std::cout << "destroy Animal ..." << std::endl;
}

void Animal::say() {
    std::cout << "Say Hi~: " << name_ << std::endl;
}
