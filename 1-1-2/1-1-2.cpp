﻿#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    // число Пи
    const double PI = 3.14159;

    // инициализруем и считываем число a
    double a = 0;
    cin >> a;

    // рассчитываем числа y и z, согласно таблице 1.1
    double y = pow(cos(((3 * PI) / 8) - (a / 4)), 2) - pow(cos(((11 * PI) / 8) + (a / 4)), 2);
    double z = (sqrt(2) / 2) * sin(a / 2);

    cout << "Значение y: " << y << endl;
    cout << "Значение z: " << z << endl;
    cout << "Разница y - z: " << y - z;

}