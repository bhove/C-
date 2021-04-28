//Brian Andersen
//Ch3ifelseCBlock.cpp
//This program finds if it is freezing or not.
#include <iostream>

using namespace std;

int main()
{
    int temp;

    cout << "Enter the temperature outside: ";
    cin >> temp;

    if (temp > 32)
        cout << "It's above freezing." << endl;
    else
        cout << "It's below freezing." << endl;

    return 0;
}
