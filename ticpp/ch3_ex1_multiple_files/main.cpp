/*
Create a header file (with an extension of ‘ .h’). In this file,
declare a group of functions by varying the argument
lists and return values from among the following:  void,
char,  int, and t float. Now create a  .cpp file that includes
your header file and creates definitions for all of these
functions. Each definition should simply print out the
function name, argument list, and return type so you
know it’s been called. Create a second  .cpp file that
includes your header file and defines ) int main( ) ,
containing calls to all of your functions. 
*/

#include "ch3_ex1.h"

using namespace std; 

int main (void)
{
	// call'em all:
	
	funct('r');
	funct1(1);
	char a = funct2(2);
	int z = funct3(11.2);
	
	cout << endl << "return char a : " << a << endl;
	cout << "return int z : " << z << endl;
	
	cout << endl << "Press Enter to quit..." << endl;
	getchar();
	
}
