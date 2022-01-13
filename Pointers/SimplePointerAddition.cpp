#include <iostream>
#include <math.h>
using namespace std;

void collectnumber(int* ,int*);
int calc_number( int, int);
void displayresult(int);


int main() {

	char answer = 'y';

	while (answer == 'y' || answer == 'Y')
	{
	
	int a, b;
	int sum;

	collectnumber(&a, &b);
	sum = calc_number(a,b);
	displayresult(sum);
	
	}
	
	cout << "do you want to continue" << endl;
	cin >> answer;
	return 0;
}
void collectnumber(int* a_ptr, int* b_ptr) {

	cout << "Please input the value of a and b in integer format:";
	cin >> *a_ptr >> *b_ptr;
}

int calc_number(int a, int b) {
	int sum;
	sum = a + b;
	return sum;
}
void displayresult(int sum) {
	cout << "The sum of a and b is : \n" << sum << endl << endl;
}
