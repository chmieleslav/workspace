#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main (void)
{
	ifstream file("blabla.txt");
	string word; 
	int occur_nb = 0;
	
	while (file >> word)
	{
		if (("Line" == word) || 
			("Line." == word) || 
			("line" == word) || 
			("line." == word))
		{
			occur_nb++; 
		}
	}
	
	cout << "Total occurences of \"line\" word : " << occur_nb << endl;
}
