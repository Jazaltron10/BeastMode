#include <iostream>
#include <iomanip>
using namespace std;

int main(){
for (int i = 1; i <= 5; i++){
    for (int j = 1; j <= 5; j++) 
        cout << "*"; 
        cout << endl; 
    }



// multiplication table 
for (int i = 1; i <= 12; i++){ 
    for (int j = 1; j <= 12; j++) 
        cout << setw(3) << i * j; 
        cout << endl ; 
}
for (int i = 1; i <=10; i++){ 
    cout << setw(3) << i * 1 << endl; 
}

	for (int i = 10; i >= 1; i--)
	{
		for (int k = i; k > 0; k--)
			cout << " * ";
			cout << endl;

	}

    return 0;
}