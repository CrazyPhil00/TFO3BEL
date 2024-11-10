#include <iostream>
#include <windows.h>
#include <time.h>


using namespace std;


int main(int, char **)
{

    srand(time(NULL));

    SetConsoleOutputCP(CP_UTF8);

    std::byte test;
    int array_size;

    int biggest, smallest;

    double average = 0;

    array_size = 0;

    cout << "Wie viele Noten möchtest du eingeben:";

    cin >> array_size;

    int notenList[array_size];

    for (int i = 0; i < array_size; i++)
    {
        cout << "Gib eine Note ein:";

        cin >> notenList[i];
    }
    

    biggest = notenList[0];
    smallest = notenList[0];

    for (int i = 0; i < array_size; i++)
    {
        if (notenList[i] > biggest) biggest = notenList[i];
        if (notenList[i] < smallest) smallest = notenList[i];

        average += notenList[i];
    }

    average = average / array_size;
    
    
    cout << "Höchste Note ist " << biggest << endl;
    cout << "Kleinste Note ist " << smallest << endl;
    cout << "Durchschnitt ist " << average;
    
    return 0;
}



