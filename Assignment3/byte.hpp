//
//  byte.hpp
//  Assignment3
//
//  Created by Sean Madzelonka on 3/27/23.
//

#ifndef byte_hpp
#define byte_hpp

#include <stdio.h>
#include <string>

class Byte {
private:
    bool bits[8];

public:
    Byte();
    Byte(int val);
    Byte(int ar[]);
    Byte add(int val);
    Byte sub(int val);
    Byte mul(int val);
    Byte div(int val);
    int toInt();
    std::string toString();
};

#endif /* byte_hpp */
