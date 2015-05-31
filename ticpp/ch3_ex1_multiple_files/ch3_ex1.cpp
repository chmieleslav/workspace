#include "ch3_ex1_polymorph.h"

using namespace std; 

void funct(char arg)
{
	(void)arg;
	cout << "void funct(char arg)" << endl;
}

void funct1(int arg)
{
	(void)arg;
	cout << "void funct(int arg)" << endl;
}

char funct2(int arg)
{
	char a = 'r';
	(void)arg;
	cout << "char funct(int arg)" << endl;
	return a;
}

int funct3(float arg)
{
	(void)arg;
	cout << "int funct(float arg)" << endl;
	return 0;
}
