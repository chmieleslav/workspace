/*
Make a Stash that holds doubles. Fill it with 25 double
values, then print them out to the console.
*/

#include <iostream>
#include "CLib.h"

using namespace std;

int main (void)
{
	int initSize = 25;
	CStash stashForDoubles;
	initialize(&stashForDoubles, sizeof(double));
	
	double element = 1.123;
	
	for (int i = 0; i < initSize; i++)
	{
		add(&stashForDoubles, &element);
		element = element + 0.0001;
	}
	
	for (int i = 0; i < initSize; i++)
	{
		cout << "Element No. " << i << ":\t" << *(double*)fetch(&stashForDoubles, i) << endl; 
	}
}
