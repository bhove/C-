//Brian Andersen
//This program straight vibin'
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int val, sum, cnt, b70;
    double avg, p70;
    sum = 0;
    cnt = 0;
    cout << "Enter a value (0 to quit): ";
    cin >> val;
    while (val != 0) {

        sum += val;
        cnt++;
        if (val < 70)
            b70++;
        cout << "Enter a value (0 to quit): ";
        cin >> val;
    }
    avg = (double)(sum) / cnt;
    p70 = (double)(b70) / cnt * 100;
    cout << "The average is " << fixed << setprecision(1) << avg << endl;
    cout << "The percent below 70 is " << fixed << setprecision(1) << p70 << "%" << endl;
    return 0;
}
