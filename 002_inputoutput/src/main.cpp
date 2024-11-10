#include <iostream>

using namespace std;

int main(int, char **)
{

    float a;
    float b;
    float c;

    cout << "What is the ground plane?";

    cin >> a;

    cout << "What is the height?";

    cin >> b;

    c = (a * b) / 2;

    cout << "The area is " << c;

    return 0;
}
