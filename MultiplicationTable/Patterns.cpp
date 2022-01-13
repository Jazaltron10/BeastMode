#include <iostream>
#include <iomanip>
using namespace std;

void write_equal_triangle(int);
void write_reverse_triangle(int);

int main()
{
	int n;
	cout << "please input the num of rows you scumbag\n";
	cin >> n;
	 write_equal_triangle(n);
	 write_reverse_triangle(n);
	/*char answer;
	 cout << "Do You Want to Reverse The Triangle,\n y = yes and n = no \n";
	 cin >> answer;
	 if (answer == 'y' )
	 {
		 write_reverse_triangle(n);
	 }*/
	return 0;
}
void write_equal_triangle(int n) 
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= n - i; j++)
		{
			cout << " ";
		}
		for (int k = 0; k < 2 * i + 1; k++)
		{
			cout << "*";
		}
		cout << endl;
	}
}


void write_reverse_triangle(int n) 
{
	for (int i = n; i >= 0; i--)
	{
		for (int j = n - i; j >= 0; j--)
		{
			cout << " ";
		}
		for (int k = 2 * i + 1; k > 0; k--)
		{
			cout << "*";
		}
		cout << endl;
	}
}
































/*	cout << "This program calculates or displays the time table :\n";

		for (int x=1;x<=12;x++)
		{
			for (int y = 1; y <= x; y++)
				cout << setw(5) <<  x * y ;
			cout << endl;
		}
		*/

		/*
		int f = 1, i = 2;
		while(++i<5)
		{
			f *= i;
		}
		cout << f;*/