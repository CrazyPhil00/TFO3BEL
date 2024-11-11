#include <iostream>
#include <windows.h>
#include <time.h>
#include <cstdint>

using namespace std;

#define LIST_SIZE 5000

bool containsNumber(int number, int array[]);

int main(int, char **)
{

    srand(time(NULL));

    SetConsoleOutputCP(CP_UTF8);

    uint8_t wuefelListe[LIST_SIZE];

    int amountList[6] = {0, 0, 0, 0, 0, 0};
    float oddList[6] = {0, 0, 0, 0, 0, 0};

    int numberArray[6] = {0};
    int guessArray[6] = {0};

    int randomNum = 0;
    int points = 0;

    int menu = 0;

    cout << 
        "[1] Würfel warscheinlichkeiten" << endl <<
        "[2] Lotto spiel" << endl <<
        "[*] Ende";

    cin >> menu;

    switch (menu)
    {
        case 1:
        {
            /***********************************************************
            *
            *                       Würfel
            *
            ************************************************************/


            for (int i = 0; i < LIST_SIZE; i++)
                wuefelListe[i] = (uint8_t)rand() % 6 + 1;

            for (int i = 0; i < LIST_SIZE; i++)
            {
                amountList[(int)wuefelListe[i] - 1]++;
            }

            cout << "----------------------------------------------" << endl;

            for (int i = 0; i < 6; i++)
            {
                oddList[i] = (amountList[i] / 5000.0) * 100.0;

                cout << i + 1 << " wurde " << amountList[i] << " gewürfelt, dass enspricht " << oddList[i] << "%." << endl;
            }

            cout << "----------------------------------------------";


            break;
        }

        case 2:
        {
            /***********************************************************
            *
            *                       Lotto
            *
            ************************************************************/

            for (int i = 0; i < 6; i++)
            {

                do
                {
                    randomNum = rand() % 90 + 1;

                } while (containsNumber(randomNum, numberArray));

                numberArray[i] = randomNum;
            }

            for (int i = 0; i < 6; i++)
            {
                cout << "Gib deine Zahlen ein: (1-90): ";
                cin >> guessArray[i];
            }

            cout << "--------------------------------------------------" << endl;

            for (int i = 0; i < 6; i++)
            {

                if (containsNumber(guessArray[i], numberArray))
                {
                    cout << "Die zahl " << guessArray[i] << " wurde gewürfelt!" << endl;
                    points += 10;
                }
                else
                    cout << "Die zahl " << guessArray[i] << " wurde nicht gewürfelt!" << endl;
            }

            cout << "--------------------------------------------------" << endl;

            if (points > 10)
            {
                cout << "Du hast " << points << " gewonnen!";
            }
            else
                cout << "Du hast leider nichts gewonnen.";
            }

            default: {


                break;
            }
        
        }

    return 0;
}

bool containsNumber(int number, int array[])
{
    bool contains = false;
    for (int i = 0; i < 6; i++)
    {
        if (number == array[i])
            contains = true;
    }

    return contains;
}
