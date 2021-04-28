#include <iostream>
#include <iomanip>
#include <math.h>
#include <cmath>

using namespace std;

void getinfo(double &b1, double &b2, double &s);
double calcarea(double b1, double b2, double s);
void calcper (double b1, double b2, double s);
double calcht (double b1, double b2, double s);
char menu();

int main()
{
    double base1, base2, sides, area;
    char ex;

    getinfo(base1, base2, sides);

    do {
        ex = menu();
        switch(ex) {
            case 'A':   area = calcarea (base1, base2, sides);

                        cout << "Area of a trapezoid with 1st base " << base1
                             << " and 2nd base " << base2 << " is " << fixed
                             << setprecision(1) << area << endl;
                        break;
            case 'P':   calcper(base1, base2, sides);
                        break;
        }
    } while (ex != 'Q');


    return 0;
}

void getinfo(double &b1, double &b2, double &s) {
    do {
        cout << "Enter base 1: ";
        cin >> b1;
        if (b1 < 0) {
            cout << "Negative bases are not valid" << endl;
        }
    } while (b1 < 0);
    do {
        cout << "Enter base 2: ";
        cin >> b2;
        if (b2 < 0) {
            cout << "Negative bases are not valid" << endl;
        }
    } while (b2 < 0);
    do {
        cout << "Enter sides: ";
        cin >> s;
        if (s < 0) {
            cout << "Negative sides are not valid" << endl;
        }
    } while (s < 0);
}

char menu ()
{
    char ex;
    do {
        cout << endl;
        cout << "A: Area" << endl;
        cout << "P: Perimeter" << endl;
        cout << "Q: Quit" << endl;
        cout << endl;
        cout << "Enter your choice (A, P, or Q): ";
        cin >> ex;
        ex = toupper(ex);
        if (ex != 'A' && ex != 'P' && ex != 'Q') {
            cout << endl;
            cout << "Please input A, P, or Q." << endl;
        }
        cout << endl;
    } while (ex != 'A' && ex != 'P' && ex != 'Q');
}

double calcht (double b1, double b2, double s)
{
    double ht, calc1;
    calc1 = abs((b2 - b1) / 2);

    ht = sqrt((s * s) - (calc1 * calc1));
    return ht;
}

double calcarea(double b1, double b2, double s)
{
    double ht;
    ht = calcht (b1, b2, s);

    return abs(((b1 + b2) / 2)) * ht;
}

void calcper (double b1, double b2, double s)
{
    double p;
    p = b1 + b2 + (2 * s);

    cout << "Perimeter of a trapezoid with 1st base " << b1
                             << " and 2nd base " << b2
                             << " is " << p << endl;
}
