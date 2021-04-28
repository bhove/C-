//Brian Andersen
//Ch3ifelsev2CBlock.cpp
//This program finds a grade.
#include <iostream>

using namespace std;

int main()
{
    int grade;

    cout << "Enter the numeric grade: ";
    cin >> grade;

    if (grade >= 90)
        cout << "A" <<
    else if (grade >= 80)
        cout << "B";
    else if (grade >= 70)
        cout << "C";
    else if (grade >= 65)
        cout << "D";
    else
        cout << "F";

    cout << endl;

    return 0;
}
