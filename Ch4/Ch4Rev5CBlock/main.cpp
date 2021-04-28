//Brian Andersen
//Ch4Rev5CBlock.cpp
//This program finds the circumference of a given circle.
#include <iostream>

using namespace std;

int main()
{

    const double PI = 3.14;
    double radius, circumference;

    cout << "Enter the radius: ";
    cin >> radius;

    if (radius < 0)
        cout << "Negative radii are illegal.";
    else {

        circumference = (2 * PI) * radius;
        cout << "The circumference is " << fixed << setprecision(2) << circumference << "." << endl;

    }

    return 0;
}
