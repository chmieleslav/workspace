#include <iostream>
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
