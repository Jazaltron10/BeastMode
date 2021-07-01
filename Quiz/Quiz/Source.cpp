#include <iostream>
#include <string>
using namespace std;

int nQuestions = 0;
int nCorrect = 0;
int nAttempts = 0;
string AskQuestions(string);
void CheckAnswers(string, string);

int main() {
    char answer = 'y';
    while (answer == 'y' || answer == 'Y'){
    cout << "Hello world!\n";
    string question = "Who won the 2018 FIFA World Cup\n";
    question += "A. France\n";
    question += "B. Spain\n";
    question += "C. Germany\n";
    question += "D. Brazil\n";
    question += "E. Italy\n";
    cout << "\n" << question;
    CheckAnswers(question, "a");

    string question_2 = "Who won the 2016 Euro Cup\n";
    question_2 += "A. Portugal\n";
    question_2 += "B. Spain\n";
    question_2 += "C. Germany\n";
    question_2 += "D. France\n";
    question_2 += "E. Italy\n";
    cout << "\n" << question_2;
    CheckAnswers(question_2, "a");

    string question_3 = "Who won the 2014 World Cup\n";
    question_3 += "A. Germany\n";
    question_3 += "B. Spain\n";
    question_3 += "C. Argentina\n";
    question_3 += "D. France\n";
    question_3 += "E. Italy\n";
    cout << "\n" << question_3;
    CheckAnswers(question_3, "a");

    string question_4 = "Who won the 2017 UEFA Champions League\n";
    question_4 += "A. Real Madrid\n";
    question_4 += "B. Arsenal\n";
    question_4 += "C. Norwich\n";
    question_4 += "D. Burundi\n";
    question_4 += "E. Chelsea\n";
    cout << "\n" << question_4;
    CheckAnswers(question_4, "a");

    string question_5 = "Who won the 2020 English Premier League\n";
    question_5 += "A. Liverpool\n";
    question_5 += "B. Arsenal\n";
    question_5 += "C. Leicester City\n";
    question_5 += "D. Manchester City\n";
    question_5 += "E. Chelsea\n";
    cout << "\n" << question_5;
    CheckAnswers(question_5, "a");
    cout <<"\n"<< nCorrect << " questions Correct out of " << nQuestions << " Questions\n\n";
    
    
    cout << "Do you want to Attempt this quiz again\n";
    cin >> answer;
    nAttempts++;
    }
    cout << "Your total number of attempts is " << nAttempts << endl;
    return 0;
}

string AskQuestions(string question) {
    while (true) {
        string answer;
        //cout << question + "\n";
        cin >> answer;
        if (answer == "a") {
            cout << "This is the correct answer\n";
            return answer;
        }
        else if (answer == "b" || answer == "c" || answer == "d" || answer == "e") {
            cout << "InCorrect\n";
            return answer;
        }
        else {
            cout << "Invalid answer please enter A,B,C,D or E\n";
            return answer;
        }
    }
}

void CheckAnswers(string question, string correctAnswer) {
    string answer = AskQuestions(question);
    if (answer == correctAnswer) {
        cout << correctAnswer << " Is the correct answer well done \n";
        nCorrect++;
    }
    else {
        cout << answer << " This is the wrong answer, the correct answer is " << correctAnswer << "\n";
    }
    nQuestions++;
}

