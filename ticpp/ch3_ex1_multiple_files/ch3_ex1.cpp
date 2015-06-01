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

void funct(char arg)
{
	(void)arg;
	cout << "void funct(char arg)" << endl;
}

void funct1(int arg)
{
	(void)arg;
	cout << "void funct1(int arg)" << endl;
}

char funct2(int arg)
{
	char a = 'r';
	(void)arg;
	cout << "char funct2(int arg)" << endl;
	return a;
}

int funct3(float arg)
{
	(void)arg;
	cout << "int funct3(float arg)" << endl;
	return 0;
}
