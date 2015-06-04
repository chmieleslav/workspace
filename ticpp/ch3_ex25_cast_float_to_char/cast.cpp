/*
Define a float variable. Take its address, cast that address
to an unsigned char and assign it to an unsigned char
pointer. Using this pointer and [ ], index into the float
variable and use the  printBinary( ) function defined in
this chapter to print out a map of the float (go from 0 to 
sizeof(float)). Change the value of the float and see if
you can figure out what’s going on (the float contains
encoded data).
*/

#include <iostream>
#include "printBinary.h"

using namespace std;

int main(void)
{
	float a = 0.999999999999999;
	unsigned char *p1 = (unsigned char*)&a;
	
	for(unsigned int i=0; i<sizeof(float); i++)
	{
		printBinary(p1[i]);
		cout << endl;
	}
}
