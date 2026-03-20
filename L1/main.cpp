#include <iostream>
using namespace std;

int main()
{
    char c;
    cin >> c;

    switch(c){
        case 'A':
            cout << "91-100" << endl;
            break;

        case 'B':
            cout << "81-90" << endl;
            break;

        case 'C':
            cout << "71-80" << endl;
            break;

        case 'D':
            cout << "61-70" << endl;
            break;

        case 'E':
            cout << "51-60" << endl;
            break;

        case 'F':
            cout << "0-50" << endl;
            break;

        default:
            cout << "Invalid grade" << endl;
    }
}

