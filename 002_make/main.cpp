/**
 * @author      : Xue Yi (andy_xueyi@hotmail.com)
 * @file        : main
 * @created     : Monday Dec 02, 2019 13:53:50 CST
 */

#include <iostream>
#include "include/Animal.h"

int main()
{
    std::cout << "Hello World" << std::endl;
    Animal a(10, "Bunny");
    a.say();
    return 0;
}

