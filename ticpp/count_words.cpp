#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main (void)
{
	ifstream file("blabla.txt");
	int words_nb = 0;
	string word;
	
	while (file >> word) // GOLDEN LINE : taking words from stream, one by one. 
	{
		cout << word << ", ";
		words_nb++;
	}
	
	cout << endl << "Total words : " << words_nb << endl;
	
	file.close();
}
