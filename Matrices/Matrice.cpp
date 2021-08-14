#include <iostream>
#include <string>
void dMatrix1 ();
void AddMatrix();
int main(){
    dMatrix1();
    AddMatrix();
    return 0;
}
void dMatrix1(){
        int matrix[3][4] = {{6, -5, 1, 3},{2, -4, 8, 3},{4, -7, -6, 5}};
        for (int row = 0; row < 3; row++){// for each row
            for (int column = 0; column < 4; column++){// for each column in the row
                std::cout << matrix[row][column] << std::endl;
            }
        }
}
        /*
         * A1.length = number of rows of first matrix 
         * A1[0].length = number of columns of first matrix 
         * A2.length = number of rows of second matrix 
         * A2[0].length = number of columns of second matrix 
         * rowOfFirst * columnOfSecond = newElement;
         */
void AddMatrix(){
    int row = 0;
    int col = 0;
    int A1[3][3] = {{4,2,3},{5,7,6},{6,5,12}};
    int A2[3][3] = {{1,8,9},{3,5,4},{9,13,6}};
    int newMatrix[3][3];
    for(row = 0; row < 3; row++){
        for(col = 0; col < 3; col++){
            newMatrix[row][col] = A1[row][col] + A2[row][col];
            std::cout << newMatrix[row][col] << "\t" ;
        }
    }
}