#include <iostream>

using namespace std;

int main()
{
    int first, second, third, orig1, orig2, steps;
    steps = 0;
    cout << "Enter the first number: ";
    cin >> first;
    cout << "Enter the second number: ";
    cin >> second;
    orig1 = first;
    orig2 = second;

    do {
        third = (first + second) % 10;
        cout << third << endl;
        first = second;
        second = third;
        steps++;
    } while (orig1 != first || orig2 != second);
    cout << "It took " << steps << " steps";
    return 0;
}
