#include <iostream>
/*
Create two functions, one that takes a * string* and one
that takes a  string&. Each of these functions should
modify the outside  string object in its own unique way.
In ) main( ), create and initialize a  string object, print it,
then pass it to each of the two functions, printing the
results.
*/

#include <stdio.h>
#include <string>

using namespace std; 


string mod1(string* arg)
{
	string result;
	result = *arg;
	result += "123";
	return result;
}

void mod2(string& arg)
{
	arg += "456";
}

int main (void)
{
	string word("hello");
	string word_modified;
	
	cout << word << endl;
	
	word_modified = mod1(&word);
	cout << word_modified << endl;
	
	mod2(word);
	cout << word << endl;
		
	cout << endl << "Press Enter to quit..." << endl;
	getchar();
	
}
