#include "ch3_ex1_polymorph.h"

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
