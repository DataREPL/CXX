/**
 * @author      : Xue Yi (andy_xueyi@hotmail.com)
 * @file        : Animal
 * @created     : Monday Dec 02, 2019 14:03:02 CST
 */

#ifndef ANIMAL_H

#define ANIMAL_H
#include <iostream>
#include <string>

class Animal {
public:
    Animal(int age, std::string name);
    ~Animal();
    void say();
private:
    int age_;
    std::string name_;
};


#endif /* end of include guard ANIMAL_H */

