
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

void addition();
void multiplication();

bool isNumberValid(int, int);

int points = 0; //global points

int main()
{

    int selction = 0;
    srand(time(NULL));

    do {

        cout << "1 - addition" << endl;
        cout << "2 - multiplication" << endl;

        cout << "0 - Exit" << endl;
        cin >> selction;


        if (selction == 1)
        {
            addition();

        }
        else if (selction == 2)
        {
            multiplication();

        }
        else if (selction == 0)
        {
            cout << "You collected " << points << " points! \n BYE!" << endl;
        }
        else {
            cout << "ERROR: selection was not recognized" << endl;
        }



    } while (selction != 0);

}


void addition() {
    int x, y;
    char done = 'n';
    do {
        x = rand() % 10 + 1;
        y = rand() % 10 + 1;

        int answer = x + y;

        cout << x << "+" << y << "= ?" << endl;
        int userAnswer;
        cin >> userAnswer;
        if (isNumberValid(answer, userAnswer)) {
            cout << "CONGRATULATIONS!" << endl;
            points++;
            cout << "you have " << points << " points!" << endl;
        }
        else {
            cout << "incorrect, the correct answer is " << answer << endl;
        }
        cout << "Another example? (y/n)" << endl;
        cin >> done;
    } while (done != 'n');


}

void multiplication() {
    int x, y;
    x = rand() % 10 + 1;
    y = rand() % 10 + 1;

    int answer = x * y;

    cout << x << "*" << y << "= ?" << endl;
    int userAnswer;
    cin >> userAnswer;
    if (isNumberValid(answer, userAnswer)) {
        cout << "CONGRATULATIONS!" << endl;
        points += 2;
        cout << "you have " << points << " points!" << endl;
    }
    else {
        cout << "incorrect, the correct answer is " << answer << endl;
    }
}

bool isNumberValid(int expected, int given) {
    return expected == given;
}



