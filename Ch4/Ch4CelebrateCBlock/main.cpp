/*

//Brian Andersen
//This program celebrates good times oh yeah!
#include <iostream>

using namespace std;

int main()
{
    int counter;

    for (counter = 1; counter <= 20; counter++) {
    cout << "YAY!!" << endl;
    }
    return 0;
}

*/

//Brian Andersen
//This program celebrates good times oh yeah!
#include <iostream>

using namespace std;

int main()
{
    int times, counter;

    cout << "How many times: ";
    cin >> times;
    cout << endl;

    for (counter = 1; counter <= times; counter++) {
    cout << "YAY!!" << endl;
    }
    return 0;
}
