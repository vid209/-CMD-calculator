﻿
#include <iostream>

int main()
{
    float num1, num2,res;
    std::cout << "enter num1: ";
    std::cin >> num1;

    std::cout << "enter num2: ";
    std::cin >> num2;
   
    char math;
 std::cout << "enter math symbol: ";
    std::cin >> math;


    if (math == '+')
        res = num1 + num2;
    else if (math == '-')
        res = num1 - num2;
    else if (math == '*')
        res = num1 * num2;
    else if (math == '/')
        res = num1 / num2;

    std::cout << "result: " << res;{}


   return 0;
}
