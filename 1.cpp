//
//  1.cpp
//  C++
//
//  Created by Ritik Jain on 7/21/23.
//
#include "1.hpp"
#include <iostream>

//Variables
int main() {
    int a = 4;
    int b = 7;
    int temp = a;
    a = b;
    b = temp;  //Changing a and b
    std::cout << b;
    return 0;
}

//Constants
int main1() {
    const double pi = 3.14;
    std:: cout << pi;
    return 0;
}

// Mth expressions
int main2() {
    int x = 8;
    int y = 24;
    int z = x + y ;
    std:: cout << z;
    return 0;
}

int main3() {
    int x = 8;
    int y = x++ ; //x= 9 y = 8
    int z = ++x ; // x = 9 z = 9
    std:: cout << x;
    return 0;
}
