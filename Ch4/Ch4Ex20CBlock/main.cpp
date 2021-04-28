#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int i;
    double money, interest, totinterest;

    cout << "Enter initial investment: ";
    cin >> money;

    for (i = 1; i <= 5; i++) {
        cout << "Enter interest rate for year " << i << " (decimal): ";
        cin >> interest;

        totinterest = (money * interest);

        money += totinterest;

        cout << "You earned $" << fixed << setprecision(2) << totinterest << " interest" << endl;

    }

    cout << "Your CD is worth $" << fixed << setprecision(2) << money << endl;

    return 0;
}
