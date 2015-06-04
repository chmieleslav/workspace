/*
Create a struct that holds two string objects and one int.
Use a typedef for the struct name. Create an instance of
the struct, initialize all three values in your instance, and
print them out. Take the address of your instance and
assign it to a pointer to your struct type. Change the
three values in your instance and print them out, all
using the pointer.
*/
#include <iostream>
#include <string>

using namespace std;

typedef struct {
	string first_name;
	string last_name;
	int age;
} id_card;

int main(void)
{
	id_card card1, card2;
	card1.first_name = "John";
	card1.last_name = "Smith";
	card1.age = 30;
	
	card2.first_name = "Mike";
	card2.last_name = "Jones";
	card2.age = 40;

	cout << "ID card #1: " << card1.first_name << " " << card1.last_name 
		<< ", age: " << card1.age << endl;
		
	cout << "ID card #2: " << card2.first_name << " " << card2.last_name 
		<< ", age: " << card2.age << endl;
	
	id_card *p1 = &card1;
	id_card *p2 = &card2;
	
	p1->first_name = "JOHN";
	p1->last_name = "SMITH";
	p1->age = 31;
	
	p2->first_name = "MIKE";
	p2->last_name = "JONES";
	p2->age = 41;
	
	cout << "Modified ID card #1: " << p1->first_name << " " << p1->last_name 
		<< ", age: " << p1->age << endl;
		
	cout << "Modified ID card #2: " << p2->first_name << " " << p2->last_name 
		<< ", age: " << p2->age << endl;
	
}
