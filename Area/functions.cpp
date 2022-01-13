#include<iostream>
#include <math.h>
#include "Header.h"
#define pi 3.142
using namespace std;


void getvalue(int *h_ptr,int *r_ptr)
{
	cout << "please input the values for your height and radius\n";
	cin >> *h_ptr >> *r_ptr;

}
int calcvalue(int h, int r)
{
	int area;
	area = pi*pow(r,2)*h;



	return area;

}
void writevalue(int area)
{
	cout << "the value of the area is : " << area << endl;
}

void writeawesomeness()
{
	cout << "This jasper Dude is A Fucking God\n";
}