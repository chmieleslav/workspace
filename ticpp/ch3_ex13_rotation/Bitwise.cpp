//: C03:Bitwise.cpp
// From Thinking in C++, 2nd Edition
// Available at http://www.BruceEckel.com
// (c) Bruce Eckel 2000
// Copyright notice in Copyright.txt
//{L} printBinary
// Demonstration of bit manipulation

/*
Modify Bitwise.cpp to use the functions from
Rotation.cpp. Make sure you display the results in such a
way that it’s clear what’s happening during rotations.
*/

#include "printBinary.h"
#include "Rotation.h"
#include <iostream>
using namespace std;

// A macro to save typing:
#define PR(STR, EXPR) \
  cout << STR; printBinary(EXPR); cout << endl;  

int main() {
  // bit rotation
  unsigned char q = 0x3C;
  PR("q in binary: ", q);
  unsigned char w = rol(q);
  PR("w = rol(q) in binary: ", w);
  unsigned char z = ror(q);
  PR("z = ror(q) in binary: ", z);
    
} ///:~
