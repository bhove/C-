//Brian Andersen
//This program adds 'em up.

#include <iostream>

using namespace std;

int main()
{
    int f, l, s, n;
    s = 0;


    do {
        cout << "Please insert the starting number: ";
        cin >> f;
        cout << "Please insert the ending number: ";
        cin >> l;
        if (f > l)
            cout << "Please enter a starting number smaller than the ending number." << endl;
    } while (f > l);
    n = f;
    cout << endl;

    while (n <= l) {
        s += n;
        n++;
    }

    cout << "The sum of integers from " << f << " to " << l << " is " << s;
    return 0;
}
