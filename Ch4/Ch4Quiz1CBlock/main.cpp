#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    char ac;
    const double PI = 3.14159;
    double radius, area, circu;

    do {
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    if (radius < 0)
        cout << "Negative radii are invalid." << endl;
    } while (radius < 0);
    do {
    cout << "Would you like the area or circumference? (A/C): ";
    cin >> ac;
    ac = toupper(ac);
    if (ac != 'A' && ac != 'C')
        cout << "Please input A for area or C for circumference." << endl;
    } while (ac != 'A' && ac != 'C');
    if (ac == 'A') {
        area = (PI) * ((radius) * (radius));
        cout << "The area of the circle is " << fixed << setprecision(1) << area;
    }
    else {
        circu = ((PI) + (PI)) * (radius);
        cout <<  "The circumference of the circle is " << fixed << setprecision(1) << circu;
    }

    return 0;
}
