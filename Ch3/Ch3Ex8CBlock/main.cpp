//Brian Andersen
//Ch3Ex8CBlock.cpp
//This program finds the time.
#include <iostream>

using namespace std;

int main()
{
    int minss, hrs, minsf;

    cout << "Enter the number of minutes: ";
    cin >> minss;
    cout << endl;

    hrs = minss / 60;
    minsf = minss % 60;

    cout << "This is " << hrs << ":" << minsf;
    return 0;
}
