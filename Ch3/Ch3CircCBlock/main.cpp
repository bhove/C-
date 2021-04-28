//Brian Andersen
//Ch3CircCBlock.cpp
//This program finds the circumference of a given circle.
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

    const double PI = 3.14;
    double radius, circumference;

    cout << "Enter the radius: ";
    cin >> radius;

    circumference = (2 * PI) * radius;

    cout << "The circumference is " << fixed << setprecision(2) << circumference << "." << endl;

    return 0;
}
