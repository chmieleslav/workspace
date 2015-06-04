/*
Create a struct with a single int data member, and two
global functions, each of which takes a pointer to that struct. 
The first function has a second int argument and
sets the struct’s int to the argument value, the second
displays the int from the struct. Test the functions.
*/

#include <iostream>
#include <string>

using namespace std;

struct StructureWithANumber {
	int number = 5;
};

void changeNumber(StructureWithANumber* pStructure, int new_number)
{
	pStructure->number = new_number;
}

void displayNumber(StructureWithANumber* pStructure)
{
	cout << "The number is: " << pStructure->number << endl;
}

int main(void)
{
	struct StructureWithANumber s1;
	
	displayNumber(&s1);
	
	cout << "Modifying the number..." << endl;
	changeNumber(&s1, 6);
	
	displayNumber(&s1);
}
