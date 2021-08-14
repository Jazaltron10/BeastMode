#include <iostream>
#include <string>
using namespace std;

int nQuestions = 0;
int nCorrect = 0;
int nAttempts = 0;

//Function Prototypes
string Ask(string);
void Check(string, string);

int main()
{
    cout << "Hello World! This is an Awesome Quiz App\n";
    char choice = 'y';
    while (choice == 'y' || choice == 'Y')
    {
        string Question = "\nQ1. Which of these players below played in THREE consecutive Fifa world Cup Finals, Winning two Back to Back\n";
        Question += "a. Rivaldo\n";
        Question += "b. Pele\n";
        Question += "c. Cafu\n";
        Question += "d. Bebeto\n";
        Question += "e. Romario\n";
        Check(Question, "b");

        Question = "\nQ2. How many goals did Neymar scored for brazil \n";
        Question += "a. 74\n";
        Question += "b. 70\n";
        Question += "c. 68\n";
        Question += "d. 67\n";
        Question += "e. 65\n";
        Check(Question, "c");

        Question = "\nQ3. As of 2021 How many UEFA Champions League trophies has AC Milan won\n";
        Question += "a. 2\n";
        Question += "b. 6\n";
        Question += "c. 5\n";
        Question += "d. 4\n";
        Question += "e. 7\n";
        Check(Question, "e");

        Question = "\nQ4. Who Won the 1996 European Championship\n";
        Question += "a. Italy\n";
        Question += "b. Portugal\n";
        Question += "c. France\n";
        Question += "d. Germany\n";
        Question += "e. Spain\n";
        Check(Question, "d");

        Question = "\nQ5. Who is the greatest footballer of all time\n";
        Question += "a. Messi\n";
        Question += "b. Maradona\n";
        Question += "c. Pele\n";
        Question += "d. Zidane\n";
        Question += "e. Ronaldo\n";
        Check(Question, "c");

        Question = "\nQ6. There have been two World Cup trophies. What was the name of the first?\n";
        Question += "a. Delphine Romero Trophy\n";
        Question += "b. Jules Rimet Trophy\n";
        Question += "c. Aurier Louis Trophy\n";
        Question += "d. Dino Melaye Trophy\n";
        Question += "e. Olivier Anais Corentin Trophy\n";
        Check(Question, "b");

        Question = "\nQ7. Who won the Second World Cup Hosted in 1934?\n";
        Question += "a. Uruguay\n";
        Question += "b. Italy\n";
        Question += "c. Brazil\n";
        Question += "d. West Germany\n";
        Question += "e. Argentina\n";
        Check(Question, "b");

        Question = "\nQ8. In what year did Argentina win their very First FIFA World Cup?\n";
        Question += "a. 1974\n";
        Question += "b. 1978\n";
        Question += "c. 1982\n";
        Question += "d. 1986\n";
        Question += "e. 1990\n";
        Check(Question, "b");

        Question = "\nQ9. The record number of World Cup goals is 16, scored by who?\n";
        Question += "a. Ronaldo Delima\n";
        Question += "b. Pele\n";
        Question += "c. Klose\n";
        Question += "d. Gerd Muller\n";
        Question += "e. Platini\n";
        Check(Question, "c");

        Question = "\nQ10. Three people have won the World Cup as a player and as a coach. Mario Zagallo, Didier Deschamps and... can you name the third?\n";
        Question += "a. Vicente Del Bosque\n";
        Question += "b. Duda\n";
        Question += "c. Joachim Low\n";
        Question += "d. Roberto Mancini\n";
        Question += "e. Franz Beckenbauer\n";
        Check(Question, "e");

        Question = "\nQ11. Messi famously retired from international duty in which year before reversing his decision?\n";
        Question += "a. 2014\n";
        Question += "b. 2015\n";
        Question += "c. 2016\n";
        Question += "d. 2017\n";
        Question += "e. 2019\n";
        Check(Question, "c");

        Question = "\nQ12. Which player holds the record for most Champions League winners medals?\n";
        Question += "a. Raul\n";
        Question += "b. Gento\n";
        Question += "c. Di Stefano\n";
        Question += "d. Puskas\n";
        Question += "e. Miereles\n";
        Check(Question, "b");

        Question = "\nQ13. Which outfield player appeared in the Champions League final in three different decades?\n";
        Question += "a. Ryan Giggs\n";
        Question += "b. Phillip Lahm\n";
        Question += "c. Oliver Kahn\n";
        Question += "d. Cafu\n";
        Question += "e. Paolo Maldini\n";
        Check(Question, "a");

        Question = "\nQ14. Who Scored FC Barcelona's First Goal at the 2015 UCL Final?\n";
        Question += "a. Luiz Suarez\n";
        Question += "b. Neymar\n";
        Question += "c. Jordi Alba\n";
        Question += "d. Ivan Rakitic\n";
        Question += "e. Andres Iniesta\n";
        Check(Question, "d");

        Question = "\nQ15. How many La Liga titles have Real Madrid won as of 2021?\n";
        Question += "a. 33\n";
        Question += "b. 34\n";
        Question += "c. 35\n";
        Question += "d. 36\n";
        Question += "e. 32\n";
        Check(Question, "b");

        cout << "\nDo you want to attempt this Quiz again [y/n]: ";
        cin >> choice;
        nAttempts++;
    }
    if (nAttempts == 1)
    {
        if (nCorrect <= 1)
        {
            cout << "\nYou have attempted this Quiz Only Once and you got " << nCorrect << " Question out of " << nQuestions << "\n";
        }
        else
        {
            cout << "\nYou have attempted this Quiz Only Once and you got " << nCorrect << " Questions out of " << nQuestions << "\n";
        }
    }
    else
    {
        if (nCorrect <= 1)
        {
            cout << "\nYou have attempted this Quiz " << nAttempts << " Times and you got " << nCorrect << " Question out of " << nQuestions << "\n";
        }
        else
        {
            cout << "\nYou have attempted this Quiz " << nAttempts << " Times and you got " << nCorrect << " Questions out of " << nQuestions << "\n";
        }
    }

    return 0;
}

string Ask(string question)
{
    while (true)
    {
        cout << question;
        string answer;
        cin >> answer;
        if (!(answer == "a" || answer == "b" || answer == "c" || answer == "d" || answer == "e"))
        {
            cout << "\nYour answer is invalid, please choose one of the following options , a, b, c, d, e:\n";
        }
        else
        {
            return answer;
        }
    }
}

void Check(string question, string correctAnswer)
{
    string userAnswer = Ask(question);
    if (userAnswer == correctAnswer)
    {
        cout << "correct\n";
        nCorrect++;
    }
    else
    {
        cout << "Wrong!\n";
        //cout << "The correct answer is " << correctAnswer << "\n";
    }
    nQuestions++;
}
/*
To RUN IN TERMINAL 
g++ FootBallQuiz.cpp -o FootBallQuiz.exe

./FootBallQuiz.exe
*/