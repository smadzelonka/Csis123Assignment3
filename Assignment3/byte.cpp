//
//  byte.cpp
//  Assignment3
//
//  Created by Sean Madzelonka on 3/27/23.
//

#include "byte.hpp"

Byte::Byte() : Byte(0) {}

Byte::Byte(int val) {
    // Set all bits to 0 initially
    for (int i = 0; i < 8; i++) {
        bits[i] = false;
    }

    // Convert the value to binary and store it in bits
    int i = 7;
    while (val > 0 && i >= 0) {
        bits[i] = val % 2;
        val /= 2;
        i--;
    }
}

Byte::Byte(int ar[]) {
    // Set all bits to 0 initially
    for (int i = 0; i < 8; i++) {
        bits[i] = false;
    }

    // Set the bits according to the values in the array
    for (int i = 0; i < 8 && ar[i] >= 0 && ar[i] <= 1; i++) {
        bits[i] = ar[i];
    }
}

Byte Byte::add(int val) {
    int result = toInt() + val;
    return Byte(result);
}

Byte Byte::sub(int val) {
    int result = toInt() - val;
    return Byte(result);
}

Byte Byte::mul(int val) {
    int result = toInt() * val;
    return Byte(result);
}

Byte Byte::div(int val) {
    int result = toInt() / val;
    return Byte(result);
}

int Byte::toInt() {
    int result = 0;
    int multiplier = 1;
    for (int i = 7; i >= 0; i--) {
        if (bits[i]) {
            result += multiplier;
        }
        multiplier *= 2;
    }
    return result;
}

std::string Byte::toString() {
    std::string result = "";
    for (int i = 0; i < 8; i++) {
        result += bits[i] ? "1" : "0";
    }
    return result;
}

