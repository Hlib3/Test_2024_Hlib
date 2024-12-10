// This program is for exercise 4 in programming cource.
// Dieses Programm ist für die Aufgabe 4 in Programmierungkurs.
#include <iostream>
#include <iomanip>
#include "windows.h"

using namespace std;
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int a, b, c;
    cout << "Введіть A," << endl;
    cin >> a;
    cout << "Введіть B" << endl;
    cin >> b;
    cout << "Введіть C" << endl;
    cin >> c;
    cout << "B розташоване між A і C ?" << boolalpha << ((a < b && b < c) ||(c < b && b < a));
}

