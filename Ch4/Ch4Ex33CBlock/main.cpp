//Brian Andersen
//This program plays 21
#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{

    int cards, pc, cc, ptot, ctot, cw, pw, d, i;
    char ex;

    cw = 0;
    pw = 0;
    d = 0;

    do {
        srand(time(0));

        cout << "How many cards do you want? ";
        cin >> cards;

        ptot = 0;
        pc = 0;
        cout << "You: ";
        for (i = 1; i <= cards; i++) {
            pc = rand() % 10 + 1;
            cout << " " << pc;
            ptot += pc;
        }

        cout << endl;

        ctot = 0;
        cc = 0;
        cout << " Computer: ";
        for (i = 1; i <= cards; i++) {
            cc = rand() % 10 + 1;
            cout << " " << cc;
            ctot += pc;
        }
        cout << endl;

        if ((ptot == ctot) || (ptot > 21 && ctot > 21)) {
            cout << "\n You have " << ptot << " and I have " << ctot << " so we tie."; // Tie
            d++;
        }
        else if ((ctot > ptot && ctot <= 21) || (ctot < 21 && ptot > 21) {
            cout << "\n You have " << ptot << " and I have " << ctot << " so I win."; //Computer wins
            cw++;
        }
        else {
            cout << "\n You have " << ptot << " and I have " << ctot << " so you win."; //Player wins by having more under 21.
            pw++;
        }
        cout << endl;

        do {
            cout << "\nDo you want to play again? (Y/N): ";
            cin >> ex;
            ex = toupper(ex);
            if (ex != 'Y' && ex != 'N')
                cout << "\nEnter Y or N." << endl;
        } while (ex != 'Y' && ex!= 'N');

    } while (ex == 'Y');

    cout << "My wins: " << cw << endl;
    cout << "Your wins: " << pw << endl;
    cout << "Draws: " << d << endl;

    return 0;
}
