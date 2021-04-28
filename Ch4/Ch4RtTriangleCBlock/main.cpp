//Brian Andersen
//This program is triangle.
#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main()
{
    double a, b, c, p;

    do {
        cout << "Enter side a: ";
        cin >> a;
        if (a < 0)
            cout << "No negative inputs." << endl;
    } while (a < 0);
    do {
        cout << "Enter side b: ";
        cin >> b;
        if (b < 0)
            cout << "No negative inputs" << endl;
    } while (b < 0);

    c = sqrt((a*a)+(b*b));
    p = (a + b + c);

    cout << "Base = " << fixed << setprecision(1) << a
         << " Height = " << fixed << setprecision(1) << b
         << " Hypotenuse = " << fixed << setprecision(1) << c
         << " Perimeter = " << fixed << setprecision(1) << p << endl;
    return 0;
}
