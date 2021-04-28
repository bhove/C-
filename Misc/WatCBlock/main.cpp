#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

using namespace std;

int main()
{
    int x;

    srand(time(0));

    do {

    x = rand() % 15;

    cout << x << endl;

    Sleep(1000);

    } while (2 + 2 != 5);
}
