#include <iostream>

using namespace std;

int main (void)
{
	int a = 5;
	int b = 6;
	float c = 7.123;
	
	cout << "value of a:\t" << a << endl;
	cout << "value of b:\t" << b << endl;
	cout << "value of c:\t" << c << endl << endl;
	
	int *p1 = &a;
	cout << "address of a:\t" << &a << endl;
	cout << "value of p1:\t" << p1 << endl;
	
	int *p2 = &b;
	cout << "address of b:\t" << &b << endl;
	cout << "value of p2:\t" << p2 << endl;
	
	float *p3 = &c;
	cout << "address of b:\t" << &c << endl;
	cout << "value of p2:\t" << p3 << endl;
	 
	
	
	
}
