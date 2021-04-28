//Brian Andersen
//Ch4Rev8CBlock.cpp
//This program finds the TRUTH of golf.
#include <iostream>

using namespace std;

int main()
{

    int golf;

    cout << "Enter stroke amounts: ";
    cin >> golf;

    if (golf == 1)
        cout << "Hole in one!" << endl;
    else if (golf == 2)
        cout << "Double-Eagle" << endl;
    else if (golf == 3)
        cout << "Eagle" << endl;
    else if (golf == 4)
        cout << "Birdie" << endl;
    else if (golf == 5)
        cout << "Par" << endl;
    else if (golf == 6)
        cout << "Bogey" << endl;
    else if (golf == 7)
        cout << "Double-Bogey" << endl;
    else if (golf == 8)
        cout << "Triple-Bogey" << endl;
    else
        cout << "Disaster" << endl;


    return 0;
}
