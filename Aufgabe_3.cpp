// This program is for exercise 3 in programming couse.
// Dieses Programm ist für die Aufgabe 3 in Programmierungkurs.
#include <iostream>
#include"windows.h"
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    
    float m;
    float p_water;
      
    cout << "Enter the tonnage of the vessel "<< endl;
    cout << "(Введіть водотоннажність судна) "<< endl;
    cin >> m;

    m = m * 1000000;
    p_water = 1030;
    float g = 9.8;
    float P = m * g;
    float V = (P / p_water) / g;
    
    cout << "The volume of the submerged part of the vessel: " << endl;
    cout << "(Об’єм зануреної частини судна:) " << endl;
    cout << V << "м³";

    return 0;
}

