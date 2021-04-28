#include <iostream>
#include <iomanip>

using namespace std;

int main ()

{

int base1, base2;
double height, area;

cout << "Enter the first base: ";
cin >> base1;
cout << "Enter the second base: ";
cin >> base2;
cout << "Enter the height: ";
cin >> height;
cout << endl;

area = ((base1+base2)/2)*height;

cout << "The area of the trapezoid is: " << fixed << setprecision(2) << area;
return (0)
}
