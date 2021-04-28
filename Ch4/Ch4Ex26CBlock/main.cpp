//Brian Andersen
//This program does slots!
#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
    int tokens, num1, num2, num3;
    char ex;
    srand(time(0));

    tokens = 100;

    do {
        cout << "You have " << tokens << " tokens. Pull? (Y/N): ";
        cin >> ex;
        ex = toupper(ex);
        if (ex != 'Y' && ex != 'N') {
            cout << "Please enter Y or N." << endl;
        }
        if (ex == 'Y') {
            tokens--;
            num1 = rand() % 3 + 1;
            num2 = rand() % 3 + 1;
            num3 = rand() % 3 + 1;

            cout << "\n[" << num1 << "] [" << num2 << "] [" << num3 << "]" << endl << endl;

            if(num1 == 1 && num2 == 1 && num3 == 1) {
            tokens += 4;
            }
            if(num1 == 2 && num2 == 2 && num3 == 2) {
            tokens += 8;
            }
            if(num1 == 3 && num2 == 3 && num3 == 3) {
            tokens += 12;
            }
        }
    } while (ex != 'N');
    cout << "Thanks for playing!" << endl;
    return 0;
}
