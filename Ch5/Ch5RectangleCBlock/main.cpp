//Brian Andersen
//Ch5RectangleCBlock

#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

//-------------------------------------------------------------------

void getinput(int &len, double &wid);
void calcarea(int len, double wid);
double calcper (int len, double wid);
double calcdiagonal (int len, double wid);
char menu();

//-------------------------------------------------------------------

int main()
{
    int length;
    double width, perimeter, diagonal;
    char ex;


    getinput(length, width);

    do {
        ex = menu();
        switch(ex) {
            case 'A':   calcarea (length, width);
                        break;
            case 'P':   perimeter = calcper(length, width);
                        cout << "Perimeter of a rectangle with length " << length
                             << " and width " << fixed << setprecision(0) << width
                             << " is " << fixed << setprecision(0) << perimeter << endl;
                        break;
            case 'D':   diagonal = calcdiagonal(length, width);
                        cout << "Diagonal of this rectangle is "
                             << fixed << setprecision(2) << diagonal << endl;
                        break;
        }
    } while (ex != 'Q');


    return 0;
}


//------------------------------------------------------------------------

char menu ()
{
    char ex;
    do {
        cout << endl;
        cout << "A: Area" << endl;
        cout << "P: Perimeter" << endl;
        cout << "D: Diagonal" << endl;
        cout << "Q: Quit" << endl;
        cout << endl;
        cout << "Enter your choice (A, P, D, or Q): ";
        cin >> ex;
        ex = toupper(ex);
        if (ex != 'A' && ex != 'P' && ex != 'D' && ex != 'Q') {
            cout << endl;
            cout << "Please input A, P, D, or Q." << endl;
        }
        cout << endl;
    } while (ex != 'A' && ex != 'P' && ex != 'D' && ex != 'Q');
}

//------------------------------------------------------------------------

void getinput(int &len, double &wid) {
    do {
        cout << "Enter length: ";
        cin >> len;
        if (len < 0) {
            cout << "Negative lengths are not valid" << endl;
        }
    } while (len < 0);
    do {
        cout << "Enter width: ";
        cin >> wid;
        if (wid < 0) {
            cout << "Negative widths are not valid" << endl;
        }
    } while (wid < 0);
}
//------------------------------------------------------------------------

void calcarea(int len, double wid)
{
    double area;

    area = len * wid;

    cout << "Area of a rectangle with length " << len
         << " and width " << fixed << setprecision(0) << wid
         << " is " << fixed << setprecision(0) << area << endl;
}

//------------------------------------------------------------------------

double calcper (int len, double wid)
{
    return 2 * len + 2 * wid;
}

//------------------------------------------------------------------------

double calcdiagonal (int len, double wid)
{
    return sqrt((len*len)+(wid*wid));
}
