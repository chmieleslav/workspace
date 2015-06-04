/*
Change your solution to Exercise 2 so the struct is
declared in a properly “guarded” header file, with the
definition in one cpp file and your main( ) in another.
*/

#include "struct_suite.h"

using namespace std;

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
