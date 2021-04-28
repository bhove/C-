//Brian Andersen
//Ch5MathCBlock
//This program does math.

#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int menu();

int addition();
int multiplication();
int subtraction();
int mixed();

int score (int tries);

int main()
{
    int choice, i, pts;

    pts = 0;
    i = 0;

    srand(time(0));

    do {
        cout << endl;
        choice = menu();
        switch (choice) {
            case 1: i++;
                    pts += addition();
                    break;

            case 2: i++;
                    pts += subtraction();
                    break;

            case 3: i++;
                    pts += multiplication();
                    break;

            case 4: i++;
                    pts += mixed();
                    break;
        return 0;
        }
    } while (choice !=0);
    cout << "You scored " << pts << " out of " << i * 50 << " possible points." << endl;
}
//----------------------------------------------------------------
int menu()
{
    int ch;

    do {
        cout << "1. Add" << endl;
        cout << "2. Subtract" << endl;
        cout << "3. Multiply" << endl;
        cout << "4. Mixed" << endl;
        cout << "0. Quit" << endl;
        cout << endl;
        cin >> ch;
        if (ch < 0 || ch > 4) {
            cout << "Please enter an option 0-4." << endl;
            cout << endl;
        }
    } while (ch < 0 || ch > 4);

    cout << endl;

    return ch;

}
//----------------------------------------------------------------
int addition()
{
    int n1, n2, a, cnt, t, g, sc;

    sc = 0;

    for (cnt = 1; cnt < 11; cnt++) {
        n1 = rand() % 10 + 1;
        n2 = rand() % 10 + 1;
        a = n1 + n2;
        t = 0;
        do {
            cout << endl;
            cout << n1 << " + " << n2 << " = ?: ";
            cin >> g;
            t++;
            if (a == g) {
                cout << "Correct!" << endl;
                sc += score(t);
            }
            else if (t == 3)
                cout << "The correct answer was " << a;
            else
                cout << "Try again!" << endl;
        } while (a != g && t != 3);
    }
    cout << endl;
    cout << "Your score was " << sc << " out of 50" << endl;
    return sc;
}
//----------------------------------------------------------------
int multiplication()
{
    int n1, n2, a, cnt, t, g, sc;

    sc = 0;

    for (cnt = 1; cnt < 11; cnt++) {
        n1 = rand() % 10 * 1;
        n2 = rand() % 10 * 1;
        a = n1 * n2;
        t = 0;
        do {
            cout << endl;
            cout << n1 << " * " << n2 << " = ?: ";
            cin >> g;
            t++;
            if (a == g) {
                cout << "Correct!" << endl;
                sc += score(t);
            }
            else if (t == 3)
                cout << "The correct answer was " << a;
            else
                cout << "Try again!" << endl;
        } while (a != g && t != 3);
    }
    cout << endl;
    cout << "Your score was " << sc << endl;
    return sc;
}
//----------------------------------------------------------------
int subtraction()
{
    int n1, n2, st, a, cnt, t, g, sc;

    sc = 0;

    for (cnt = 1; cnt < 11; cnt++) {
        n1 = rand() % 10 + 1;
        n2 = rand() % 10 + 1;
        if (n1 < n2) {
            st = n1;
            n1 = n2;
            n2 = st;
        }
        a = n1 - n2;
        t = 0;
        do {
            cout << endl;
            cout << n1 << " - " << n2 << " = ?: ";
            cin >> g;
            t++;
            if (a == g) {
                cout << "Correct!" << endl;
                sc += score(t);
            }
            else if (t == 3)
                cout << "The correct answer was " << a;
            else
                cout << "Try again!" << endl;
        } while (a != g && t != 3);
    }
    cout << endl;
    cout << "Your score was " << sc << endl;
    return sc;
}
//----------------------------------------------------------------
int mixed() {
    int n1, n2, st, a, cnt, t, g, sc, ch;
    char oper;

    sc = 0;

    for (cnt = 1; cnt < 11; cnt++) {
        ch = rand() % 3 + 1;
        n1 = rand() % 10 + 1;
        n2 = rand() % 10 + 1;
        switch (ch) {
            case 1: oper = '+';
                    a = n1 + n2;
                    break;
            case 2: oper = '*';
                    a = n1 * n2;
                    break;
            case 3: oper = '-';
                    if (n1 < n2) {
                        st = n1;
                        n1 = n2;
                        n2 = st;
                    }
                    a = n1 - n2;
                    break;
        }
        t = 0;
        do {
            cout << endl;
            cout << n1 << " " << oper << " " << n2 << " = ?: ";
            cin >> g;
            t++;
            if (a == g) {
                cout << "Correct!" << endl;
                sc += score(t);
            }
            else if (t == 3)
                cout << "The correct answer was " << a;
            else
                cout << "Try again!" << endl;
        } while (a != g && t != 3);
    }
    cout << endl;
    cout << "Your score was " << sc << endl;
    return sc;
}
//----------------------------------------------------------------
int score (int tries) {
    int sc;
    switch (tries) {
            case 1: sc = 5;return sc;
                    break;
            case 2: sc = 3;
                    break;
            case 3: sc = 1;
                    break;
    }
    return sc;
}
