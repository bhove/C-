//Brian Andersen
//Ch3Ex11bCBlock.cpp
//This program finds the amount of boxes to use for an online order.
#include <iostream>

using namespace std;

int main()
{
    int pots, vbox, bbox, sbox;

    cout << "Enter the amount of flower pots to ship: ";
    cin >> pots;
    cout << endl;

    vbox = pots / 9;
    bbox = pots % 9 / 4;
    sbox = (pots % 9) % 4;

    cout << "We will ship:" << endl;
    cout << "\t" << vbox << " very big box(s)" << endl;
    cout << "\t" << bbox << " big box(s)" << endl;
    cout << "\t" << sbox << " small box(s)" << endl;
    return 0;
}
