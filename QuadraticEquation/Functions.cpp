#include <iostream>
#include <cmath>
#include <iomanip>
#include "Header.h"
using namespace std;


void get_inputs(double *a_ptr, double*b_ptr, double*c_ptr)
{
	cout << "Please Input the value of the coefficients \n";
	cin >> *a_ptr >> *b_ptr >> *c_ptr;
}
char calc_value(double a, double b, double c, char r, char s, char i,double *x_ptr)
{
	double d = *x_ptr;
	d = (pow(b, 2) - (4 * a * c));
	if (d > 0)
	{
		cout << "This Has Real Roots \n";
		return r;
	}
	else if (d < 0)
	{
		cout << "This Has Imaginary Roots \n";
		return i;
	}
	else
	{
		cout << "This Has The Same Roots \n";
		return s;
	}

}
void calc_root(float a, float b, double d, double *x1_ptr, double *x2_ptr, char e,double *re_ptr,double *im_ptr)
{
	if (e == 'r')
	{	
		*x1_ptr = -b + sqrt(d) / (2 * a);
		*x2_ptr = -b - sqrt(d) / (2 * a);
	}

	else if (e == 'i')
	{
		*re_ptr = -b / (2 * a);
		*im_ptr = sqrt(-d) / (2 *a);
	}
	else
	{
		*x1_ptr = -b/ (2 * a);
		*x2_ptr = -b/ (2 * a);
	}
}
void write_roots(double* x1_ptr, double* x2_ptr, double* re_ptr, double* im_ptr, char e)
{
	if (e == 'r')
	{
		cout << "The Roots of the equation are \n " << *x1_ptr << setw(10) << *x2_ptr << endl;
	}

	else if (e == 'i')
	{
		cout << "The Roots of the equation are \n " <<*re_ptr <<" + j"<<*im_ptr<< setw(20) << *re_ptr << " - j" << *im_ptr << endl;
	}
	else
	{
		cout << "The Roots of the equation are \n " << *x1_ptr << setw(10) << *x2_ptr << endl;
	}
}
