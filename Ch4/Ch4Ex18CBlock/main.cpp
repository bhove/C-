/*

//Brian Andersen
//This program calculates grades
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int grade, grades, total, counter;
    double avg;

    total = 0;

    cout << "How many grades?: ";
    cin >> grades;

    counter = 1;

    do {
        do {
            cout << "Enter grade #" << counter << ": ";
            cin >> grade;
            if (grade < -1 || grade > 100)
                cout << "Valid grades are numbers between 0 and 100." << endl;
        } while (grade < -1 || grade > 100);

        if(grade != -1) {
            total += grade;
            counter++;
        }
    } while (counter <= grades || grade != -1);

    avg = (double)total / (double)grades;

    cout << endl;
    cout << "The total is " << total << endl;
    cout << "The average is " << fixed << setprecision(2) << avg << "%" << endl;


    return 0;
}

*/

//Brian Andersen
//This program calculates grades.
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int grade, grades, total, counter;
    double avg;

    total = 0;

    counter = 0;

    do
    {
        do
        {
            cout << "Enter grade (0-100) or -1 to quit: ";
            cin >> grade;
            if (grade < -1 || grade > 100)
                cout << "Valid grades are numbers between 0 and 100 or enter -1 to quit." << endl;
        }
        while (grade < -1 || grade > 100);

        if(grade != -1)
        {
            total += grade;
            counter++;
        }
    }
    while (grade != -1);

    avg = (double)total / (double)counter;

    cout << endl;
    cout << "The total is " << total << endl;
    cout << "The average is " << fixed << setprecision(2) << avg << "%" << endl;


    return 0;
}


