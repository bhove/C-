//Brian Andersen
//Ch3Ex13CBlock.cpp
//This program calculates the total of a fast food order.
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double clothes, food, entertainment, rent, total, pclothes, pfood, pentertainment, prent;

    cout << "Enter the amount spent on clothing     : ";
    cin >> clothes;
    cout << "Enter the amount spent on food         : ";
    cin >> food;
    cout << "Enter the amount spent on entertainment: ";
    cin >> entertainment;
    cout << "Enter the amount spent on rent         : ";
    cin >> rent;
    cout << endl;

    total = clothes + food + entertainment + rent;
    pclothes = (clothes) / total * 100;
    pfood =  (food) / total * 100;
    pentertainment = (entertainment) / total * 100;
    prent = (rent) / total * 100;

    cout << "Clothing     \t" << fixed << setprecision(1) << pclothes << "%" << endl;
    cout << "Food         \t" << fixed << setprecision(1) << pfood << "%" << endl;
    cout << "Entertainment\t" << fixed << setprecision(1) << pentertainment << "%" << endl;
    cout << "Rent         \t" << fixed << setprecision(1) << prent << "%" << endl;

    return 0;
}
