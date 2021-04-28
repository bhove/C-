//Brian Andersen
//Ch3Ex9CBlock.cpp
//This program finds the proper change output.
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int cents, q, d, n, p;

    cout << "Enter the amount of change in cents: ";
    cin >> cents;
    cout << endl;

    q = cents / 25;
    cents = cents % 25;
    d = cents / 10;
    cents = cents % 10;
    n = cents / 5;
    cents = cents % 5;
    p = cents;

    cout << "Change:" << endl;
    cout << left << setw(5) << "Quarters: " << q << endl;
    cout << left << setw(5) << "Dimes: " << d << endl;
    cout << left << setw(5) << "Nickels: " << n << endl;
    cout << left << setw(5) << "Pennies: " << p << endl;
    return 0;
}
