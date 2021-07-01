#include <iostream>
#include <string>
#include <iomanip>

using namespace std;


void questions() {
	cout << "Hello world!\n";
    string question = "Who won the 2018 FIFA World Cup\n";
    //System.out.println(question);
    question += "A. France\n";
    question += "B. Spain\n";
    question += "C. Germany\n";
    question += "D. Brazil\n";
    question += "E. Italy\n";


    while (true) {
        string answer;
        cout << question + "\n";
        cin >> answer;
        if (answer == "a") {
            cout << "This is the correct answer\n";
            break;
        }
        else if (answer == "b" || answer == "c" || answer == "d" || answer == "e") {
            cout << "InCorrect! Please try again\n";
        }
        else {
            cout <<  "Invalid answer please enter A,B,C,D or E\n";
        }
    }
}

void syntax_error() {
    int height = 20;
    int width = 10;
    int area = height * width;
    cout << setw(10) << "\nThe Area of the rectangle is \n" << setw(10) << area;
}

void Loop_1() {
    /*--PART 1------------------------------------*/
    cout << "Part 1 -> THE DO WHILE LOOP\n";
    
    // The Do While Loop Example
        bool pub = true;
    do {
        cout << "pub is false\n" ;
    } while (pub == false);

    // while loop alternative
    
    cout << "\n<--Alternative-while_loop-->\n";
    while (pub == false) {
        // Nothing gets printed because conditional is checked
        // Before loop gets executed
        cout << "pub is false\n";
    }

    // For loop alternative
    cout << "\n<--Alternative-for_loop-->\n";
    for (int i = 0; i < 1; i++) {
        if (pub == false) {
            cout << "The for Loop";
        }
        cout << "pub is probably false\n";
    }
}
int main() {
    Loop_1();
    cout << "\n";
    questions();
    cout << "\n";
    syntax_error();
    
    return 0;
}
