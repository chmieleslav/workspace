/*
Define an array of int. Take the starting address of that 
array and use static_cast to convert it into an void*.
Write a function that takes a void*, a number (indicating
a number of bytes), and a value (indicating the value to
which each byte should be set) as arguments. The
function should set each byte in the specified range to the
specified value. Try out the function on your array of int.
*/

#include <iostream>

using namespace std;


void func1(void* arg, int nb_of_bytes, int new_val)
{
	unsigned char* startAddr = (unsigned char*)arg;
	for (int i=0; i<nb_of_bytes; i++)
	{
		*startAddr = new_val;
		startAddr++;
	}
}

void printArray(int* array, int lenght)
{
	for (int i=0; i<lenght; i++)
	{ 
		cout << "a[" << i << "]: " << array[i] << endl;		
	}
}

int main(void)
{
	int a[] = {0, 1, 2, 3, 4, 5};
	
	int lenght_of_a = sizeof(a) / sizeof(int);
	
	printArray(a, lenght_of_a);
	
	cout << endl;
	
	cout << "Size of a[] array: " << sizeof(a) << " bytes." << endl;
	cout << "Size of int type: " << sizeof(int) << " bytes." << endl;

	cout << endl;

	void* vp = static_cast<void*>(a);
	
	cout << "Setting the first four elements of the array to 0..." << endl << endl;
	
	func1(vp, 4*sizeof(int), 0x00); 

	printArray(a, lenght_of_a);
	cout << endl;
}

