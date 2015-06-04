/*
Create a struct declaration with a single member
function, then create a definition for that member
function. Create an object of your new data type, and call
the member function.
*/
#include <iostream>
#include <string>

using namespace std;

struct id_card {
	string first_name;
	string last_name;
	int age;
	
	void changeLastName(string new_last_name);
};

void id_card::changeLastName(string new_last_name)
{
	last_name = new_last_name;
}

int main(void)
{
	struct id_card card1;
	card1.first_name = "Mark";
	card1.last_name = "Twain";
	card1.age = 44;
	
	cout << "Before the modif:\t" << card1.first_name << " " << card1.last_name << ", " << card1.age << endl;
	
	card1.changeLastName("Knopfler");
	
	cout << "After the modif:\t" << card1.first_name << " " << card1.last_name << ", " << card1.age << endl;
}
