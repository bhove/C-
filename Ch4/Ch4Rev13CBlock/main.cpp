//Brian Andersen
//Ch4Rev13CBlock.cpp
//This program yells at you if you goof circle.
#include <iostream>

using namespace std;

int main()
{
    const string TPASS = "happiness";
    string epass;

    do {

    cout << "Enter the password: ";

    getline(cin,epass);
    if (epass != TPASS)
        cout << "Sorry, try again!" << endl;

    } while (epass != TPASS);

    cout << "You've got it!" << endl;
}
