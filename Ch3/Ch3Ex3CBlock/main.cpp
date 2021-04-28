//Brian Andersen
//Ch3Ex3CBlock.cpp
//This program finds the price of a pizza.
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

    const double pizza = 1.20;
    double psize;
    double price;

    cout << "Enter the size of the pizza: ";
    cin >> psize;

    price = pizza + (0.05 * psize * psize);

    cout << "The cost is $" << fixed << setprecision(2) << price << "." << endl;



    cout << "" << endl;
    return 0;
}
