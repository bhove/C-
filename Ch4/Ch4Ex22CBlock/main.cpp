//Brian Andersen
//This program determines votes
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    string can1, can2;
    int count1, count2, vote1, vote2, i, ward1, ward2, ubercount;
    double pct1, pct2;

    cout << "Enter candidate 1 name: ";
    getline(cin, can1);
    cout << "Enter candidate 2 name: ";
    getline(cin, can2);
    cout << endl;

    count1 = 0;
    count2 = 0;
    ward1 = 0;
    ward2 = 0;

    for (i = 1; i <= 6; i++) {
        cout << "Ward " << i << endl;
        cout << "   Enter " << can1 << ": ";
        cin >> vote1;
        cout << "   Enter " << can2 << ": ";
        cin >> vote2;

        if(vote1 > vote2)
            ward1++;
        else
            ward2++;

        count1 += vote1;
        count2 += vote2;
    }

    ubercount = count1 + count2;

    pct1 = (double)count1 / ubercount * 100;
    pct2 = (double)count2 / ubercount * 100;

    cout << left << setw(15) << "Name" << right << setw(15) << "Votes" << right << setw(15) << "Percent" << right << setw(15) << "Wards won" << endl;
    cout << left << setw(15) << can1 << right << setw(15) << count1 << right << setw(15) << fixed << setprecision(1) << pct1 << "%" << right << setw(15) << ward1 << endl;
    cout << left << setw(15) << can2 << right << setw(15) << count2 << right << setw(15) << fixed << setprecision(1) << pct2 << "%" << right << setw(15) << ward2 << endl;

    return 0;
}
