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
    scanf("%lf", &a);

    // рассчитываем числа y и z, согласно таблице 1.1
    double y = 2 * pow(sin((3 * PI) - (2 * a)), 2) * pow(cos((5 * PI) + (2 * a)), 2);
    double z = 0.25 - (0.25 * sin((5 * PI) / 2 - 8 * a));

    printf("Значение y: %f\n", y);
    printf("Значение z: %f\n", z);
    printf("Разница y - z: %f\n", y - z);

}