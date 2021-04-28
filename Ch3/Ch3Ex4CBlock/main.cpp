//Brian Andersen
//Ch3Ex3CBlock.cpp
//This program finds the price of a pizza.
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

    double speed;
    double time;

    cout << "Enter the average speed: ";
    cin >> speed;

    time = (32 / speed) * 60;

    cout << "The trip to school will take " << fixed << setprecision(1) << time << " minutes." << endl;



    cout << "" << endl;
    return 0;
}
