/*
Change your solution to Exercise 2 so the struct is
declared in a properly “guarded” header file, with the
definition in one cpp file and your main( ) in another.
*/

#include "struct_suite.h"

void id_card::changeLastName(string new_last_name)
{
	last_name = new_last_name;
}
