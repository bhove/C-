//Brian Andersen
//Ch3Ex13CBlock.cpp
//This program calculates the total of a fast food order.
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    const double BURGERPRICE = 1.49, FRYPRICE = 0.89, SODAPRICE = 0.99, TAXRATE = 0.06;
    double subtotal, tax, total, paid, change;
    int burgers, fries, sodas;

    cout << "Enter the number of burgers: ";
    cin >> burgers;
    cout << "Enter the number of fries: ";
    cin >> fries;
    cout << "Enter the number of sodas: ";
    cin >> sodas;
    cout << endl;

    subtotal = (BURGERPRICE * burgers) + (FRYPRICE * fries) + (SODAPRICE * sodas);
    tax =  subtotal * TAXRATE;
    total = subtotal + tax;
    cout << "The total before tax is: $" << fixed << setprecision(2) << subtotal << endl;
    cout << "The tax is $" << fixed << setprecision(2) << tax << endl;
    cout << "The grand total is $" << fixed << setprecision(2) << total << endl;
    cout << endl;

    cout << "Enter amount tendered: ";
    cin >> paid;
    change = paid - total;
    if (change >= 0){
    cout << "The change is: $" << fixed << setprecision(2) << change << endl;
    }
    else {
    cout << "\aSTOP! YOU HAVE VIOLATED THE LAW!";
    }

    return 0;
}
