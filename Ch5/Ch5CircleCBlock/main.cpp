/* Mrs Orlik   ch5circle
   This program calculates and prints the area and circumference of a circle with
   radius inputted by the user and using functions. */

#include <iostream>
#include <iomanip>

using namespace std;

//--------------------------------------------------------------------------

double calcarea(int rad);
void calccircumference(int rad);

//--------------------------------------------------------------------------

int main()
{
    int radius;
    double area;

    cout << "Enter the radius: ";
    cin >> radius;

    cout << endl;

    area = calcarea(radius);
    cout << "The area is " << fixed << setprecision(1) << area << endl;

    calccircumference(radius);

    return 0;
}

//--------------------------------------------------------------------------

double calcarea(int rad)
{
  double area;

  area = 3.14 * rad * rad;

  return area;
}

//--------------------------------------------------------------------------

void calccircumference(int rad)
{
  double circumference;

  circumference = 2 * 3.14 * rad;

  cout << "The circumference is "
       << fixed << setprecision(1) << circumference << endl;
}

//--------------------------------------------------------------------------
