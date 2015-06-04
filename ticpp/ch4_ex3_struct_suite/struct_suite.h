/*
Change your solution to Exercise 2 so the struct is
declared in a properly “guarded” header file, with the
definition in one cpp file and your main( ) in another.
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
