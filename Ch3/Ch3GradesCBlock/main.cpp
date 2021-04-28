//Brian Andersen
//Ch3GradesCBlock.cpp
//This program finds an average of several user inputted grades.
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

    int grade1, grade2, grade3;
    double average;

    cout << "Enter the first grade: ";
    cin >> grade1;

    cout << "Enter the second grade: ";
    cin >> grade2;

    cout << "Enter the third grade: ";
    cin >> grade3;

    average = (grade1 + grade2 + grade3) / 3.0;

    cout << "The average of these given grades is " << fixed << setprecision(1) << average << "%." << endl;



    cout << "" << endl;
    return 0;
}
