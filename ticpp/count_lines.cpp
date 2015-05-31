#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(void)
{
	ifstream file("blabla.txt");
	string line;
	int lines_nb = 0;
	
	while(getline(file, line))
	{
		cout << line << endl;
		lines_nb++;
	}
	cout << endl << "Total lines : " << lines_nb << endl;
	
	file.close();
	
}
