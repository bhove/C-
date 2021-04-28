//Brian Andersen
//Ch3TrapCBlock.cpp
//This program asks the user for  the bases of a trapezoid and then calculates the area of the trapezoid.
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int base1, base2;
    double height;
    double area;

    cout << "The length of base one is: ";
    cin >> base1;
    cout << "The length of base two is: ";
    cin >> base2;
    cout << "The height of the trapezoid is: ";
    cin >> height;
    cout << endl;

    area = ((base1 + base2) / 2.0) * height;

    cout << "The area of the trapezoid is " << fixed << setprecision(2) << area << "." << endl;
    return 0;
}
