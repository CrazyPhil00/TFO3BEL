#include <iostream>
#include <windows.h>


using namespace std;


int main(int, char **)
{

    SetConsoleOutputCP(CP_UTF8);

    double temp = 0;

    char menu = '0';

    cout  << endl << endl;
    cout << "[F] Fahrenheit in Celsius umrechen" << endl;
    cout << "[C] Celsius in Fahrenheit umrechen" << endl;
    cout << "[S] Sekunden in 24 Stunden format umrechen" << endl;
    cout << "[$] Gehalt eines Autohöndlers rechnen" << endl;
    cout << "[A] Gerhalt eines Handwerkers pro Stunde rechnen" << endl;
    cout << "[Z] Zinsrechnungen" << endl;
    cout << "[Z] " << endl;

    cin >> menu;

    switch (menu)
    {

                    // ==============================================
        case ('F'): //               Fahrenheit in C 
                    // ==============================================
        {

            cout << "Gib die Temperatur in °C ein:";

            cin >> temp;

            temp = temp * 9 / 5 + 32;

            cout << "Ist in Fahrenheit " << temp << "F" << endl;

            break;
        } 
                    // ==============================================
        case ('C'): //               C in Fahrenheit
                    // ==============================================
        {

            cout << "Gib die Temperatur in °C ein:";

            cin >> temp;

            temp = (temp - 32) * 5 / 9;

            cout << "Ist in Fahrenheit " << temp << "F" << endl;

            break;
        }     
                    // ==============================================
        case ('S'): //               Sekunden in 24
                    // ==============================================
        {          

            int time = 0;

            int hour = 0;
            int minute = 0;
            int second = 0;

            cout << "Gib die Zeit in Sekunden ein:";

            cin >> time;

            while (time != 0)
            {
                if (time > 1 * 60 * 60)
                {
                    hour++;
                    time -= 60 * 60;
                }

                if (time > 60 && time < 60 * 60)
                {
                    minute++;
                    time -= 60;
                }

                if (time < 60) 
                {
                    second = time;
                    time = 0;
                }

            }

            cout << "In 24H format: ";

            if (hour < 10) cout << "0" << hour << ":";
            else cout << hour << ":";
        
            if (minute < 10) cout << "0" << minute << ":";
            else cout << minute << ":";

            if (second < 10) cout << "0" << second << ":";
            else cout << second;

            break;
        }
                    // ==============================================
        case ('$'): //             Gehalt-Autohändler
                    // ==============================================
        {

            int sold_cars = 0;
            int salary = 1000;
        

            cout << "Wie viele Autos wurden verkauft?";

            cin >> sold_cars;

            salary += sold_cars * 100;

            if (sold_cars >= 20) salary += 500;

            cout << "Der gehalt des Autohändlers ist: " << salary << "€.";

            break;
        }
                    // ==============================================
        case ('A'): //           Handwerker Arbeitsstunden
                    // ==============================================
        {
            
            int hours = -1;
            double salary = 0;
            double cost = 22.5;
            

            while (hours < 0)
            {
                cout << "Gib deine Arbeitsstunden ein:";

                cin >> hours;
            }
            
            salary = hours * cost;

            if (salary < 1000 && salary > 500) salary +=30;
            else if (salary < 500) salary +=50;

            cout << "Der gehalt ist: " << salary << "€.";
            break;
        }
                    // ==============================================
        case ('Z'): //                Zinsrechnung
                    // ==============================================
        {
            int menuItem = 0;

            cout << "Wähle aus, was du berechnen möchtest:" << endl
                 << "[1] Zinsen" << endl
                 << "[2] Prozentsatzt" << endl
                 << "[3] Kapital" << endl;

            cin >> menuItem;

            float z,k,p,t;

            switch (menuItem) 
            {
                case (1): 
                
                {
                    cout << "Gib dein Kapital ein:";

                    cin >> k;

                    cout << "Gib dein Zinssatzt ein:";

                    cin >> p;

                    cout << "Gib deine Verzinsungsdauer in Tagen ein:";

                    cin >> t;

                    cout << "Die Zinsen betragen: " << ((k * p * t) / 36500);

                    
                    break;
                }

                case (2): 
                
                {
                    cout << "Gib deine Zinsen ein:";

                    cin >> z;

                    cout << "Gib dein Zinssatzt ein:";

                    cin >> p;

                    cout << "Gib deine Verzinsungsdauer in Tagen ein:";

                    cin >> t;

                    cout << "Das Kapital betragt: " << ((35500 * z) / (p * t));

                    break;
                }

                case (3): 
                
                {
                    cout << "Gib deine Zinsen ein:";

                    cin >> z;

                    cout << "Gib dein Kapital ein:";

                    cin >> k;

                    cout << "Gib deine Verzinsungsdauer in Tagen ein:";

                    cin >> t;

                    cout << "Die Zinsen betragen: " << ((36500 * z) / (k * t));

                    break;
                }
            }
        }

        default:
        {
            cout << "Diese Auswahl gibt es nicht!";
            break;
        }
    }

    return 0;
}
