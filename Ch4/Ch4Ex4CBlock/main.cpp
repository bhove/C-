//Brian Andersen
//Ch4Ex4CBlock.cpp
//This program measures exploitation under capitalism.
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

    char ex;
    int hours;
    double rate, wages, twages;

    cout << "Enter hours worked: ";
    cin >> hours;
    cout << "Enter hourly rate: ";
    cin >> rate;
    cout << "Exempt (Y/N)? ";
    cin >> ex;
    ex = toupper(ex);

    if (hours <= 40)
        wages = hours * rate;
    else
        wages = (40 * rate) + (hours - 40) * (rate * 1.5);

    if (ex == 'Y') {
        cout << endl;
        cout << "Gross wages = $" << fixed << setprecision(2) << wages << endl;
        cout << "NO TAXED DEDUCTED" << endl; }
    else if (ex == 'N') {
        cout << endl;
        cout << "Gross wages = $" << fixed << setprecision(2) << wages << endl;
        twages = wages * 0.82;
        cout << "Wages after taxes = $" << fixed << setprecision(2) << twages << endl; }
    else
        cout << "Input must be Y or N." << endl;
    return 0;
}
