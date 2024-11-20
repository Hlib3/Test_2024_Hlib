// This program is for exercise 1 in programming course
// Dieses Programm ist für die Aufgabe 1 in Programmierungkurs
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    cout << showpos << '\t' << 4 << noshowpos << endl;
    cout << setw(17) << internal << fixed << setprecision(2) << -67.09124 << endl;
    cout << setw(10) << right << showpos << 235 << noshowpos << endl;
    cout << "8a1" << endl;
    cout << fixed << setprecision(2) << -121.0 << endl;
    cout << showpos << 1;
    cout << 24 << noshowpos << endl;
}
