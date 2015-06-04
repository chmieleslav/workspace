/*
Repeat Exercise 4 but move the functions so they are
member functions of the struct, and test again.
*/

#include <iostream>
#include <string>

using namespace std;

struct StructureWithANumber {
	int number = 5;
	void changeNumber(int new_number);
	void displayNumber();
	
};

void StructureWithANumber::changeNumber(int new_number)
{
	number = new_number;
}

void StructureWithANumber::displayNumber()
{
	cout << "The number is: " << number << endl;
}

int main(void)
{
	struct StructureWithANumber s1;
	
	s1.displayNumber();
	
	cout << "Modifying the number..." << endl;
	s1.changeNumber(6);
	
	s1.displayNumber();
}
