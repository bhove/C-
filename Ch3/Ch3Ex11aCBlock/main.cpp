//Brian Andersen
//Ch3Ex11aCBlock.cpp
//This program finds the amount of boxes to use for an online order.
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int pots, bbox, sbox;

    cout << "Enter the amount of flower pots to ship: ";
    cin >> pots;
    cout << endl;

    bbox = pots / 4;
    sbox = pots % 4;

    cout << "We will ship:" << endl;
    cout << right << setw(5) << bbox << " big box(s)" << endl;
    cout << right << setw(5) << sbox << " small box(s)" << endl;
    return 0;
}
