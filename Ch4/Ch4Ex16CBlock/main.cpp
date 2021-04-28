//Brian Andersen
//This program celebrates good times oh yeah!
#include <iostream>

using namespace std;

int main()
{
    char grade;
    int counter, pass, fail;

    pass = 0;
    fail = 0;

    for (counter = 1; counter <= 20; counter++) {
    cout << "Enter grade of student " << counter << ": ";
    cin >> grade;
    grade = toupper(grade);
    if(grade == 'A' || grade == 'B' || grade == 'C' || grade == 'D')
        pass++;
    else if(grade == 'E' || grade == 'F')
        fail++;
    }

    cout << endl;
    cout << pass << " students passed." << endl;
    cout << fail << " students failed." << endl;
    return 0;
}
