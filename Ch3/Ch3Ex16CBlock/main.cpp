#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    string candidate1, candidate2;
    int ny1, ny2, nj1, nj2, ct1, ct2, tot1, tot2, total;
    double pct1, pct2;


    cout << "Enter candidate 1 name: ";
    getline(cin, candidate1);
    cout << "Enter candidate 2 name: ";
    getline(cin, candidate2);
    cout << endl;

    cout << "Enter vote total for " << candidate1 << " in New York: ";
    cin >> ny1;
    cout << "Enter vote total for " << candidate2 << " in New York: ";
    cin >> ny2;
    cout << "Enter vote total for " << candidate1 << " in New Jersey: ";
    cin >> nj1;
    cout << "Enter vote total for " << candidate2 << " in New Jersey: ";
    cin >> nj2;
    cout << "Enter vote total for " << candidate1 << " in Connecticut: ";
    cin >> ct1;
    cout << "Enter vote total for " << candidate2 << " in Connecticut: ";
    cin >> ct2;
    cout << endl;

    tot1 = ny1 + nj1 + ct1;
    tot2 = ny2 + nj2 + ct2;
    total = tot1 + tot2;
    pct1 = ((double)tot1 / total) * 100;
    pct2 = ((double)tot2 / total) * 100;

    cout << "Candidate" << left << setw(10) << "Votes" << right << setw(10) << "Percent" << endl;
    cout << candidate1 << left << setw(10) << tot1 << right << setw(10) << fixed << setprecision(2) << pct1 << "%" << endl;
    cout << candidate2 << left << setw(10) << tot2 << right << setw(10) << fixed << setprecision(2) << pct2 << "%" << endl;
    cout << "TOTAL VOTES:" << left << setw(10) << total << endl;

    return 0;
}
