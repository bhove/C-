#include <iostream>

using namespace std;

void getdata(double &r, double &h);
int getchoice();
double calcsurfarea(double r, double h);
void calcvolume(double r, double h);

int main()
{
    int choice;
    double radius, height, surfarea;

    getdata(radius, height);

    do {
        cout << "1: Surface Area" << endl;
        cout << "2: Volume" << endl;
        cout << "0: Quit" << endl;

        choice = getchoice();

        switch (choice) {
            case 1:
                surfarea = calcsurfarea(radius, height);
                cout << "The surface area is " << surfarea << endl;
                break;
            case 2:
                calcvolume(radius, height);
                break;
        }

    } while (getchoice() != 0);

    return 0;
}

void getdata(double &r, double &h) {
    do {
        cout << "Enter radius: ";
        cin >> r;
        if (r < 0) {
            cout << "Negative radii are not valid" << endl;
        }
    } while (r < 0);
    do {
        cout << "Enter height: ";
        cin >> h;
        if (h < 0) {
            cout << "Negative heights are not valid" << endl;
        }
    } while (h < 0);
}

int getchoice() {
    int c;

    cout << "Enter your choice: ";
    cin >> c;
    return c;
}

double calcsurfarea(double r, double h) {
    double a, pi;

    pi = 3.14;

    return 2 * pi * r * h + 2 * pi * (r * r);
}

void calcvolume(double r, double h) {
    double pi, vol;

    pi = 3.14;

    vol = pi * (r * r) * h;

    cout << "The volume is " << vol << endl;
}
