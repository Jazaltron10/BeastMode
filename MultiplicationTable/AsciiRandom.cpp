#include <iostream>
#include <math.h>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{

	char answer = 'y';
	int num;
	int seed;
	cout << "i carry god name beg you, sow a seed \n";

	while (answer == 'y' || answer == 'Y')
	{
		cin >> seed;
		srand(seed);
		for (int i = 0; i < 15; i++)

		{
			num = 65 + rand() % 26;
			cout << char(num) << "  ";
		}
		cout << "\ndo you wanna continue oooh great one\n" << endl;
		cin >> answer;
	}


	/*for (int i=1;i<129;i++)
	{
		cout << i <<"   "<< char (i) << endl;


	}

*/



	return 0;
}