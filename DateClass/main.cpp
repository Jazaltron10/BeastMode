#include <iostream>
#include <string>
#include "header.h"
#include "functions.cpp"




int main()
{

	char answer = 'y';
	while(answer =='y'|| answer =='Y') {

		DateClass Date1, Date2;
		bool ok, uk;
		cout << "please first person should enter his/her details\n";
		Date1.GetDate();
		cout << "please second person should enter his/her details\n";
		Date2.GetDate();
		ok = Date1.validate();
		uk = Date2.validate();
		if (ok == true && uk == true)
		{
			cout << "first person date is\n";
			Date1.WriteDate();
			cout << "second person date is\n";
			Date2.WriteDate();
		}

		else if (ok == true && uk == false)
		{
			cout << "first person date is\n";
			Date1.WriteDate();
			cout << "second person date is invalid" << endl;

		}
		else if (ok == false && uk == true)
		{
			cout << "first person date is invalid" << endl;
			cout << "second person date is\n";
			Date2.WriteDate();

		}
		else
		{
			cout << "invalid date for both persons" << endl;
		}

		cout << "do you want to continue" << endl;

		cin >> answer;
	}


	 //system("pause");
	return 0;
}