#include <iostream>
#include <windows.h>
#include <time.h>


using namespace std;


int main(int, char **)
{

    srand(time(NULL));

    SetConsoleOutputCP(CP_UTF8);


    cout << rand() % 10 + 1;
    
    cout << endl << endl;

    for (int i = 0; i < 5; i++) {
        cout << "*";
    }

    cout << endl << endl;

    for (int i = 0; i < 4; i++) {
        for (int i = 0; i < 3; i++) {
            cout << "*";
        }
        cout << endl;
    }

    cout << endl << endl;

    for (int i = 0; i < 10; i++) {
        cout << "*";
    }

    cout << endl;

    cout << "*\t *" << endl;
    cout << "*\t *" << endl;
    
    for (int i = 0; i < 10; i++) {
        cout << "*";
    }


    string s;

    for (int i = 0; i < 10; i++) {
        s += "*";
    }


    return 0;
}
