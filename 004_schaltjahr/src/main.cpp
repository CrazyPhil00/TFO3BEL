#include <iostream>
#include <windows.h>

using namespace std;

bool isLeapYear(int year);

int main(int, char **) {

    SetConsoleOutputCP(CP_UTF8);

    int year;

    cout << "Welches jahr?";

    cin >> year;

    if (isLeapYear(year)) cout << "Das jahr " << year << " ist ein schaltjahr!";
    else cout << "Das jahr " << year << " ist kein schaltjahr!";

    return 0;
}

bool isLeapYear(int year) {
    if (year % 4 == 0)
        if (year % 100 == 0)
            if (year % 400 == 0) return true;
            else return false;
        else return true;
    else return false;
}