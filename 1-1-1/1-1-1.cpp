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
    scanf("%f", &a);

    // рассчитываем числа y и z, согласно таблице 1.1
    double y = pow(cos(((3 * PI) / 8) - (a / 4)), 2) - pow(cos(((11 * PI) / 8) + (a / 4)), 2);
    double z = (sqrt(2) / 2) * sin(a / 2);

    printf("Значение y: %f\n", y);
    printf("Значение z: %f\n", z);
    printf("Разница y - z: %f\n", y - z);

}