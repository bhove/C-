//Brian Andersen
//Ch4Rev6CBlock.cpp
//This program finds the discriminant's values.
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

    int a, b, c;
    double disc;

    cout << "Enter the value for a: ";
    cin >> a;
    cout << "Enter the value for b: ";
    cin >> b;
    cout << "Enter the value for c: ";
    cin >> c;
    cout << "a=" << a << ", b=" << b << ", c=" << c << ": ";

    disc = (b*b) - (4*a*c);

    if (disc < 0)
        cout << "There are 0 roots";
    else if (disc == 0)
        cout << "There is 1 root";
    else
        cout << "There are 2 roots";


    return 0;
}
