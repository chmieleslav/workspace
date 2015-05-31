#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

int main (void)
{
	ifstream file("blabla.txt");
	string word;
	vector<string> words;
	unsigned int i;
	
	while (file >> word)
	{
		words.push_back(word);
	}
	
	for (i=0; i<words.size(); i++)
		cout <<  i << ": " << words[i] << endl; 
	
	cout << endl << "Total words: " << i << endl;
}
