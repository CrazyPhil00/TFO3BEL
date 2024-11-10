#include <iostream>
#include <math.h>
#include <windows.h>

using namespace std;

int main(int, char **)
{

    SetConsoleOutputCP(CP_UTF8);
    

    double a, b, c, X1, X2, diskr;

    cout << "Gib a ein:";
    cin >> a;

    if (a == 0) {
        cout << "a kann nicht 0 sein!";
    }

    cout << "Gib b ein:";
    cin >> b;

    cout << "Gib c ein:";
    cin >> c;

    cout << endl;

    diskr = b * b - 4 * a * c;

    if (diskr == 0) { // Wenn diskriminante 0 ist gibt es 1 lösung. 
        cout << "Es gibt 1 lösung!" << endl;

        X1 = (-b + sqrt(diskr)) / 2 * a;

        cout << "X1 ist " << X1;
    }
    else if (diskr > 0) { // Wenn diskriminante größer als 0 ist gibt es 2 lösungen.

        cout << "Es gibt 2 lösungen!" << endl;

        X1 = (-b + sqrt(diskr)) / 2 * a;
        X2 = (-b - sqrt(diskr)) / 2 * a;

        cout << "X1 ist " << X1 << ", X2 ist " << X2;
    }
    else cout << "Es gibt keine lösung!" << endl; // Wenn diskriminante kleiner als 0 ist gibt es keine lösung.

    return 0;
}
