#include <iostream>
#include <cmath>
#include "Header.h"

using namespace std;
int main()
{
	double a, b, c;
	char e;
	double x1, x2,re,im; 
	double d;  // where d is the value of the determinant
	char r = 'r';
	char i = 'i';
	char s = 's';
	//char ans;
	//while (ans == 'y' || ans == 'Y')
	
		get_inputs(&a, &b, &c);
		e = calc_value(a, b, c, r, s, i,&d);
		calc_root(a, b, d, &x1, &x2,e,&re,&im);
		write_roots(&x1, &x2,&re,&im,e);
		//cout << "Do You Want To Continue \n ";
		//cin >> ans;


	return 0;
}