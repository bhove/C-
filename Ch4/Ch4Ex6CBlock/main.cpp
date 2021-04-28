#include <iostream>

using namespace std;

int main()
{
    double amount;
    int years;
    amount = 2500;
    years = 0;

    do {

        amount = amount * 1.075;
        years++;


    } while (amount < 5000);
    cout << "You will have above $5000 in " << years << " years.";
    return 0;
}
