//Brian Andersen
//This programme manages a database of people

#include <iostream>
#include <windows.h>
#include <iomanip>

using namespace std;

struct person
{
     string name;
     int age;
     double height;
};
//--------------------------------------------------
int menu();
void loadinfo(person mob[]);
void printinfo(person mob[], int QTY);
void sortbyage(person mob[], int QTY);
void sortbyname(person mob[], int QTY);
void maxage(person mob[], int QTY);
double avght(person mob[], int QTY);
void printspecage(person mob[], int QTY, int age);
void printone(person mob[], int QTY);
//--------------------------------------------------
int main() {
    const int QTY = 10;
    int ch, age;

    person mob[QTY];

    loadinfo(mob);


    do {
        ch = menu();
        switch(ch) {
            case 1: printinfo(mob, QTY);
                    break;
            case 2: sortbyage(mob, QTY);
                    break;
            case 3: sortbyname(mob, QTY);
                    break;
            case 4: maxage(mob, QTY);
                    break;
            case 5: cout << "avg = " << fixed << setprecision(2) << avght(mob, QTY) << endl;
                    break;
            case 6: cout << "Enter an age: ";
                    cin >> age;
                    printspecage(mob, QTY, age);
                    break;
            case 7: printone(mob, QTY);
                    break;
        }
    } while (ch != 0);

    return 0;
}
//--------------------------------------------------
int menu() {
    int x;

    do {
        if (x < 0 || x > 7) {
            cout << endl;
            cout << "Enter a value between 0 and 7." << endl << endl;
        }
        cout << "Enter 1 to print your data" << endl;
        cout << "Enter 2 to sort data by age and print" << endl;
        cout << "Enter 3 to sort data by name and print" << endl;
        cout << "Enter 4 to find the oldest person" << endl;
        cout << "Enter 5 to find the average height" << endl;
        cout << "Enter 6 to find all persons of a given age" << endl;
        cout << "Enter 7 to find a specific person." << endl;
        cout << "Enter 0 to quit" << endl;
        cout << endl;
        cout << "Enter your choice now: ";
        cin >> x;
    } while (x < 0 || x > 7);
    return x;
}
//--------------------------------------------------
void loadinfo(person mob[]) {
    mob[0] = {"Howard, Todd", 48, 66};
    mob[1] = {"Newell, Gabe", 57, 67};
    mob[2] = {"Kojima, Hideo", 56, 68};
    mob[3] = {"Gates, William", 64, 70};
    mob[4] = {"Persson, Markus", 40, 69};
    mob[5] = {"Fils-Aime, Reginald", 58, 73};
    mob[6] = {"Baszucki, David", 56, 70};
    mob[7] = {"Miyamoto, Shigeru", 67, 65};
    mob[8] = {"Bowser, Doug", 54, 73};
    mob[9] = {"Kutaragi, Ken", 69, 66};
}
//--------------------------------------------------
void printinfo(person mob[], int QTY) {
    int i;

    system("CLS");

    for (i = 0; i < QTY; i++)
        cout << left << setw(20) << mob[i].name << right << setw(9) << "Age: " << mob[i].age << right << setw(15) << "Height: " << mob[i].height << endl;
    cout << endl;
}
//--------------------------------------------------
void sortbyage(person mob[], int QTY) {
    int i, j;
    person temp;

    for (i = 0; i < QTY - 1; i++)
        for (j = i + 1; j < QTY; j++)
            if (mob[i].age > mob[j].age) {
                temp = mob[i];
                mob[i] = mob[j];
                mob[j] = temp;
            }
    printinfo(mob, QTY);
}
//--------------------------------------------------
void sortbyname(person mob[], int QTY) {
    int i, j;
    person temp;

    for (i = 0; i < QTY - 1; i++)
        for (j = i + 1; j < QTY; j++)
            if (mob[i].name > mob[j].name) {
                temp = mob[i];
                mob[i] = mob[j];
                mob[j] = temp;
            }
    printinfo(mob, QTY);
}
//--------------------------------------------------
void maxage (person mob[], int QTY) {
    int i;
    person mxm;

    mxm = mob[0];
    for (i = 1; i < QTY; i++) {
        if (mob[i].age > mxm.age)
            mxm = mob[i];
    }
    system("CLS");
    cout << left << setw(20) << mxm.name << right << setw(9) << "Age: " << mxm.age << right << setw(15) << "Height: " << mxm.height << endl;;
}
//--------------------------------------------------
double avght(person mob[], int QTY) {
    int i, tot;
    double avg;

    tot = 0;

    for (i = 0; i < QTY; i++)
        tot += mob[i].height;
    avg = tot / (double)QTY;

    return avg;
}
//--------------------------------------------------
void printspecage(person mob[], int QTY, int age) {
    int i;
    boolean found = false;

    system("CLS");

    for (i = 0; i < QTY; i++)
        if (age == mob[i].age) {
            cout << left << setw(20) << mob[i].name << right << setw(9) << "Age: " << mob[i].age << right << setw(15) << "Height: " << mob[i].height << endl;
            boolean found = true;
        }

    if (boolean found = false);
        cout << "No persons have this age." << endl;
}
//--------------------------------------------------
void printone(person mob[], int QTY) {
    int i;
    string name;

    i = 0;

    cout << endl;
    cout << "Enter a name: ";
    cin.ignore();
    getline(cin, name);

    system("CLS");

    while (i < QTY && name != mob[i].name) {
        i++;
    }
    if (i < QTY)
        cout << left << setw(20) << mob[i].name << right << setw(9) << "Age: " << mob[i].age << right << setw(15) << "Height: " << mob[i].height << endl;
    else {
        cout << "There is no person matching this name." << endl;
    }
}
