//: C03:Boolean.cpp
// From Thinking in C++, 2nd Edition
// Available at http://www.BruceEckel.com
// (c) Bruce Eckel 2000
// Copyright notice in Copyright.txt
// Relational and logical operators.

/*
Modify Boolean.cpp and Bitwise.cpp so they use the
explicit operators (if your compiler is conformant to the
C++ Standard it will support these).
*/

#include <iostream>
using namespace std;

int main() {
  int i,j;
  cout << "Enter an integer: ";
  cin >> i;
  cout << "Enter another integer: ";
  cin >> j;
  cout << "i > j is " << (i > j) << endl;
  cout << "i < j is " << (i < j) << endl;
  cout << "i >= j is " << (i >= j) << endl;
  cout << "i <= j is " << (i <= j) << endl;
  cout << "i == j is " << (i == j) << endl;
  cout << "i != j is " << (i != j) << endl;
  cout << "i not_eq j is " << (i not_eq j) << endl;
  cout << "i && j is " << (i && j) << endl;
  cout << "i and j is " << (i and j) << endl;
  cout << "i || j is " << (i || j) << endl;
  cout << "i or j is " << (i or j) << endl;
  cout << " (i < 10) && (j < 10) is " << ((i < 10) && (j < 10))  << endl;
  cout << " (i < 10) and (j < 10) is " << ((i < 10) and (j < 10))  << endl;
} ///:~
