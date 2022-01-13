#include<iostream>
#include <math.h>
#include "Header.h"

using namespace std; 
#define pi 3.142

int main()
{
	
	char answer = 'y';
	while (answer == 'y' || answer == 'Y')
	{
		int h, r;
		int area;
		getvalue(&h, &r);
		area = calcvalue(h, r);
		writevalue(area);
		writeawesomeness();


		cout << "do you want to continue \n";
		cin >> answer;
	}
	return 0;
}
