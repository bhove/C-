//Brian Andersen
//This programme demonstrates arrays.
#include <iostream>
#include <iomanip>
#include <time.h>
#include <stdlib.h>

void initarray (int nums[], int s);
void loadarray (int nums[], int s);
void printall (int nums[], int s);
double calcavg (int nums[], int s);
void findmax (int nums[], int s);
void sortlist (int nums[], int s);

using namespace std;

int main()
{
    const int SIZE = 12;
    int nums[SIZE];

    srand(time(0));

    sortlist(nums, SIZE);

    initarray(nums, SIZE);

    loadarray(nums, SIZE);

    sortlist(nums, SIZE);

    printall(nums, SIZE);

    findmax(nums, SIZE);

    cout << "average = " << fixed << setprecision(3) << calcavg(nums, SIZE) << endl;

    return 0;
}

void initarray(int nums[], int s) {
    int i;

    for (i = 0; i < s; i++)
        nums[i] = 0;
}

void loadarray(int nums[], int s) {
    int i;

    for (i = 0; i < s; i++)
        nums[i] = rand() % 100 + 1;
}

void printall (int nums[], int s) {
    int i;

    for (i = 0; i < s; i++)
        cout << right << setw(5) << nums[i];

    cout << endl;
}

double calcavg (int nums[], int s) {
    int i, total;
    total = 0;

    for (i = 0; i < s; i++)
        total += nums[i];

    return total / (double)s;
}

void findmax (int nums[], int s) {
    int mxm, i;

    mxm = nums[0];
    for (i = 1; i < s; i++) {
        if (nums[i] > mxm)
            mxm = nums[i];
    }
    cout << "max = " << mxm << endl;
}

void sortlist (int nums[], int s) {
    int i, j, temp;

    for (i = 0; i < s - 1; i++)
        for (j = i + 1; j < s; j++)
            if (nums[i] > nums[j]) {
                temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
            }
}
