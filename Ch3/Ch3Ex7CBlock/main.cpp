//Brian Andersen
//Ch3Ex7CBlock.cpp
//This program finds the amount of players left over.
#include <iostream>

using namespace std;

int main()
{
    int pnum, team, rem;

    cout << "Enter the number of players: ";
    cin >> pnum;
    cout << endl;

    team = pnum / 7;
    rem = pnum % 7;

    cout << "There will be " << team << " teams with " << rem << " left over.";
    return 0;
}
