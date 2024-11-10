#include <iostream>
#include <windows.h>
#include <time.h>
#include <cstdint>

using namespace std;

bool containsNumber(int number, int array[]);

int main(int, char **)
{

    srand(time(NULL));

    SetConsoleOutputCP(CP_UTF8);


    int numberArray[6] = {0};

    int randomNum = 0;

    for (int i = 0; i < 6; i++)
    {
       
        do
        {
            randomNum = rand() % 90 + 1;

        } while (containsNumber(randomNum, numberArray));
        
        numberArray[i] = randomNum;
    }

    
    int number = 0;

    cout << "Gib deine Zahl ein: (1-90): ";

    cin >> number;

    if (containsNumber(number, numberArray)) {
        cout << "Deine Zahl wurde gewüfelt!";
    }else cout << "Deine Zahl wurde nicht gewürfelt :(";
    




    return 0;
}

bool containsNumber(int number, int array[]) {
    bool contains = false;
    for (int i = 0; i < 6; i++)
    {
        if (number == array[i]) contains = true;
    }

    return contains;
    
}



