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
    ((a < b && b < c) || (c < b && b < a)) ? cout << "B розташоване між A і C" : cout << "B не розташоване між A і C";
}

