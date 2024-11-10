#include <iostream>
#include <windows.h>
#include <time.h>
#include <cstdint>

using namespace std;

#define LIST_SIZE 5000


int main(int, char **)
{

    srand(time(NULL));

    SetConsoleOutputCP(CP_UTF8);


    uint8_t wuefelListe[LIST_SIZE];

    int amountList[6] = {0, 0, 0, 0, 0, 0};
    float oddList[6] = {0, 0, 0, 0,0 ,0};


    for (int i = 0; i < LIST_SIZE; i++)
        wuefelListe[i] = (uint8_t) rand() % 6 + 1;


    for (int i = 0; i < LIST_SIZE; i++)
    {
        amountList[(int) wuefelListe[i] - 1]++;
    }

    cout << "----------------------------------------------" << endl;

    for (int i = 0; i < 6; i++)
    {
        oddList[i] = (amountList[i] / 5000.0) * 100.0;


        cout << i + 1 << " wurde " << amountList[i] << " gewürfelt, dass enspricht " << oddList[i] << "%." << endl;
    }

    cout << "----------------------------------------------";


    return 0;
}



