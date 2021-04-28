//Brian Andersen
//Ch3Ex2CBlock.cpp
//This program converts Fahrenheit to Celsius.
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

    double fahrenheit;
    double celsius;

    cout << "Enter the temperature in Fahrenheit: ";
    cin >> fahrenheit;

    celsius = (5.0/9.0) * (fahrenheit-32.0);

    cout << "The temperature in Celsius is " << fixed << setprecision(1) << celsius << " degrees." << endl;



    cout << "" << endl;
    return 0;
}
