//Brian Andersen
//Ch4RectangleCBlock.cpp
//This program calculates the properties of a rectangle.
#include <iostream>

using namespace std;

int main()
{
    char ex;
    int width, height;
    double area, perimeter;

    do {
    cout << "Enter the width: ";
    cin >> width;
    if (width < 0)
        cout << "Negative widths are invalid." << endl;
    } while (width < 0);
    do {
    cout << "Enter the height: ";
    cin >> height;
    if (height < 0)
        cout << "Negative heights are invalid." << endl;
    } while (height < 0);

    do {
    cout << "Would you like the area or the perimeter? (A/P): ";
    cin >> ex;
    ex = toupper(ex);
    if(ex != 'A' && ex != 'P')
        cout << "Please input A or P." << endl;
    } while (ex != 'A' && ex != 'P');

    if(ex == 'A') {
       area = width * height;
        cout << "width=" << width << ", height=" << height << ", area=" << area;
    }
    else {
        perimeter = (width * 2) + (height * 2);
        cout << "width=" << width << ", height=" << height << ", perimeter=" << perimeter;
    }

    return 0;
}
