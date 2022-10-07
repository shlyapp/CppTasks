﻿#include <iostream>
#include <cmath>

using namespace std;

// алгоритм: в цикле проходимся по диапазону, считаем значение, проверяем на положительное
// если положительное, то добавляем к сумме и увеличиваем счетчик, после чего находим средне
// если y больше максимального, обновляем максимальное

// число Эйлера
const double E = 2.71828;

// формула для вычисления y
float F(float a, float b, float x)
{
    return (pow(a, 2) + b * pow(x, 1 / 3)) / (3.56 + sin(a + b) + pow(E, 2));
}

int main()
{
    setlocale(LC_ALL, "Russian");
    // счетчик положительных
    int counter = 0;
    // сумма положительных
    float summa = 0;
    float max = -1000000;

    int i = 0;

    float x = -50, xn = -50, xk = 50, dx = 2.5, a = 2.89, b = 14.34;

    // цикл от xn до xk с шагом dx
    for (x; x <= xk; x += dx)
    {
        i++;
        // вычисляем значение y
        float y = F(a, b, x);

        // каждую третью пару выводим
        if (i % 3 == 0)
        {
            cout << x << "\t" << y << "\n";
        }
        
        // если оно положительное
        if (y > 0)
        {
            // увеличиваем счетчик и добавляем к сумме
            counter += 1;
            summa += y;
        }

        // если y больше максимального
        if (y < max)
        {
            // обновляем максимальное
            max = y;
        }
    }

    cout << "Максимальное значение y: " << max << "\n";
    cout << "Среднее значение среди положительных элементов y: " << summa / counter;
}