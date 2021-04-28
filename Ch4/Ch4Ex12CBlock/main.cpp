//Brian Andersen
//This program finds prime factors.

#include <iostream>

using namespace std;

int main()
{
    int counter, num;
    counter = 2;

    cout << "Enter a number: ";
    cin >> num;

    while (counter <= num) {
        if (num % counter == 0) {
            cout << counter << ",";
            num = num / counter;
        }
        else
        counter++;
    }

    return 0;
}
