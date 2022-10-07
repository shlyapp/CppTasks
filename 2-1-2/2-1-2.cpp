#include <iostream>
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
    double y = 2 * pow(sin((3 * PI) - (2 * a)), 2) * pow(cos((5 * PI) + (2 * a)), 2);
    double z = 0.25 - 0.25 * sin(((5 * PI) / 2) - (8 * a));

    cout << "Значение y: " << y << endl;
    cout << "Значение z: " << z << endl;
    cout << "Разница y - z: " << y - z;

}