#include <iostream>
#include <iomanip>
#include "windows.h"

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	float a, x, b, c, f = 0;
	cout << "Введіть a: " << endl;
	cin >> a;
	cout << "Введіть b: " << endl;
	cin >> b;
	cout << "Введіть c: " << endl;
	cin >> c;
	cout << "Введіть x: " << endl;
	cin >> x;

	if (a < 0 && x != 0) f = a * x * x + b * b * x;
	else
	{
		if (a > 0 && x == 0 && x - c != 0) f = x - (a / (x - c));
		else
		{
			if (x - c == 0 || c == 0) cout << "Ділення на нуль ";
			else f = 1 + x / c;
		}
	}
	cout << "F = " << f << endl;
}

