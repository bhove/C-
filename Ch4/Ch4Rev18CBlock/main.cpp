//Brian Andersen
//This program displays 1-12 on different lines.
#include <iostream>

using namespace std;

int main()
{
    int num, sum;
    num = 1;
    sum = 0;

    while (num <= 12) {
        cout << num << endl;
        sum += num;
        num++;
    }
    cout << sum;
    return 0;
}
