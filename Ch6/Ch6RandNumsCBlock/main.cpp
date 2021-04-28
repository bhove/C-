//Brian Andersen
//This programme demonstrates arrays.
#include <iostream>
#include <iomanip>
#include <time.h>
#include <stdlib.h>

using namespace std;

int main()
{
    const int COUNT = 15;
    int nums[COUNT], i, total;
    double avg;

    srand(time(0));

    for (i = 0; i < COUNT; i++) {
        nums[i] = rand() % 50 + 1;
    }

    total = 0;

    for (i = 0; i < COUNT; i++) {
        total += nums[i];
    }

    avg = total / (double)COUNT;

    for (i = 0; i < COUNT; i++) {
        cout << nums[i] << " ";
    }

    cout << fixed << setprecision(2) << avg << endl;

    return 0;
}
