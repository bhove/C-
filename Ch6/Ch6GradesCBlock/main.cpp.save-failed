//Brian Andersen
//This programme prompts the user to input grades and then displays them and their properties.
#include <iostream>
#include <iomanip>

void initdata (int cnt, int nums[]);
void loaddata (int cnt, int nums[]);
int menu();
void printdata(int cnt, int nums[]);
void calcavg (int cnt, int nums[]);
void sortlowhigh (int cnt, int nums[]);
void sorthighlow (int cnt, int nums[]);
int findhighest (int cnt, int nums[]);
int findlowest (int cnt, int nums[]);

using namespace std;

int main()
{
    int cnt, chc;

    cout << "How many grades to enter?";
    cin >> cnt;

    int nums[cnt];

    initdata (cnt, nums);

    loaddata (cnt, nums);

    do {
        menu();
        cout << "Enter choice now";
        cin >> chc;
        switch (chc) {
            case 1: printdata(cnt, nums);
                    break;
            case 2: calcavg(cnt, nums);
                    break;
            case 3: sortlowhigh (cnt, nums);
                    break;
            case 4: sorthighlow (cnt, nums);
                    break;
            case 5: cout << "max = " << findhighest (cnt, nums);
                    break;
            case 6: cout << "min = " << findlowest (cnt, nums);
                    break;
        }
    } while (chc != 0);

    return 0;
}

void initdata (int cnt, int nums[]) {
    int i;

    for (i = 0; i < cnt; i++)
        nums[i] = 0;
}

void loaddata (int cnt, int nums[]) {
    int i, val;

    for (i = 0; i < cnt; i++) {
        do {
            cout << "Enter #" << i + 1 << ": ";
            cin >> val;
            if (val < 0 || val > 100)
                cout << "Please enter a number between 0 and 100.";
            else
                nums[i] = val;
        } while( val < 0 || val > 100);
    }
}

int menu() {
    cout << "Enter 1 to review entered grades";
    cout << "Enter 2 to calculate the average";
    cout << "Enter 3 to sort the grades in ascending order";
    cout << "Enter 4 to sort the grades in descending order";
    cout << "Enter 5 for the highest entered grade";
    cout << "Enter 6 for the lowest entered grade";
    cout << "Enter 0 to quit";
}

void printdata (int cnt, int nums[]) {
    int i;

    for (i = 0; i < cnt; i++)
        cout << nums[i];
}

void calcavg (int cnt, int nums[]) {
    int i, total;
    total = 0;

    for (i = 0; i < cnt; i++)
        total += nums[i];

    cout << "avg =" << total / (double)cnt;
}

void sortlowhigh (int cnt, int nums[]) {
    int i, j, temp;

    for (i = 0; i < cnt - 1; i++)
        for (j = i + 1; j < cnt; j++)
            if (nums[i] > nums[j]) {
                temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
            }
    for (i = 0; i < cnt; i++)
        cout << nums[i];
}

void sorthighlow (int cnt, int nums[]) {
    int i, j, temp;

    for (i = 0; i < cnt - 1; i++)
        for (j = i + 1; j < cnt; j++)
            if (nums[i] < nums[j]) {
                temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
            }
    for (i = 0; i < cnt; i++)
        cout << nums[i];
}

int findhighest (int cnt, int nums[]) {
    int mxm, i;

    mxm = nums[0];
    for (i = 1; i < cnt; i++) {
        if (nums[i] > mxm)
            mxm = nums[i];
    }
    return mxm;
}

int findlowest (int cnt, int nums[]) {
    int mnm, i;

    mnm = nums[0];
    for (i = 1; i < cnt; i++) {
        if (nums[i] < mnm)
            mnm = nums[i];
    }
    return mnm;
}
