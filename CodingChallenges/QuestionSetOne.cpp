#include <iostream>
#include <string>
#include <vector>
using namespace std;


void TwoNumberSum(int array[], int targetSum){
    int twonums[2];
    int sum;
            for(int i = 0; i < 8; i++){
                for(int j = i + 1; j < 8; j++){
                    sum = array[i] + array[j];
                    if (sum==targetSum){
                        twonums[0] = array[i];
                        twonums[1] = array[j];
                        // return twonums;
                        cout<<twonums[0];
                        cout<<twonums[1]<<endl;
                    }
                }
            }
        // return int[0];
}
int main (){
    int numlist[] ={3,5,-4,8,11,1,-1,6};
    TwoNumberSum(numlist,10);
    cout << numlist << endl;
        vector<int> SWE ; //= vector<SoftwareEngineer>();
    SWE.push_back(3);
    SWE.push_back(5);
    SWE.push_back(-4);
    SWE.push_back(8);
    SWE.push_back(11);
    SWE.push_back(1);
    SWE.push_back(-1);
    SWE.push_back(6);
    
    for(int i : SWE){
        cout <<" "<< i ;
    }
    cout <<"\n" << SWE.size() << endl;
    return 0;
}
