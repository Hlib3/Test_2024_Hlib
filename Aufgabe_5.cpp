#include <iostream>
#include "windows.h"

using namespace std;
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int n = 0;
    cout << "Введіть кількість секунд з початку доби: ";
    cin >> n;
    n %= 60;
    cout << "Секунд пройшло з останньої хвилини: " << n;
}

