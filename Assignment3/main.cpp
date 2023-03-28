//
//  main.cpp
//  Assignment 3
//  ID 0266099
//  Created by Sean Madzelonka on 3/27/23.
//

#include <iostream>
#include "byte.hpp"

int main() {
    Byte bite(7);
    
    Byte b1 = bite.add(2);
    Byte b2 = bite.sub(2);
    Byte b3 = bite.mul(2);
    Byte b4 = bite.div(2);
    
    std::cout << "Int:    " << b1.toInt() << std::endl;
    std::cout << "String: " << b1.toString() << std::endl;
    
    std::cout << "Press any key to continue..." << std::endl;
    std::cin.get();
    
    return 0;
}

