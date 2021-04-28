//Brian Andersen
//This program does it to em.
#include <iostream>

using namespace std;

int main()
{

    int num, cnt, i, first;

    do {
        cout << "Enter an integer: ";
        cin >> num;
        if (num < 0)
            cout << "Only positive integers are accepted.";
    } while (num < 0);

    cnt = 1;
    first = num;

    for (i = num; i >= 1; i--) {
        cnt *= i;
    }

    cout << first << "! = " << cnt << endl;

}
