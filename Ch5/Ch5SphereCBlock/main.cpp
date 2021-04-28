//Brian Andersen
//This program calculates the volume and diameter of a sphere based on a user inputted radius.

#include <iostream>
#include <iomanip>

using namespace std;

void calcvolume(int rad);
double calcdiameter(int rad);

int main()
{
    int radius, diameter;

    cout << "Enter the radius: ";
    cin >> radius;

    cout << endl;

    diameter = calcdiameter(radius);

    calcvolume(radius);

    cout << "The diameter is " << fixed << setprecision(0) << diameter << endl;

    return 0;
}

void calcvolume(int rad)
{
    double volume;

    volume = (4.0/3) * 3.14 * rad * rad * rad;

    cout << "The volume is " << fixed << setprecision(3) << volume << endl;
}

double calcdiameter(int rad)
{
  double diameter;

  diameter = 2 * rad;

  return diameter;

}
