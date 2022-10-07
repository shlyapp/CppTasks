#include <iostream>
#include <cmath>
#include <stdlib.h>

const int SIZE = 10;

using namespace std;

// алгоритм: вводится массив, простые числа в Y, составные в Z
// в каждом массиве находится минимальное и удаляется из него

// функция нахождения минимального
int isPrime(int n)
{
    int i;
    for (i = 2;i <= sqrt(abs(n));i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
            
    }  
    return 1;
}

// заполняем Y простыми числами
int fill_Y(int Y[SIZE], int X[SIZE])
{
    int i, yi = 0;
    for (i = 0;i < SIZE;i++)
    {
        if (isPrime(X[i]))
        {
            Y[yi] = X[i];
            yi++;
        }
    }
    return yi;
}

// заполняем Z составными числами
int fill_Z(int Z[SIZE], int X[SIZE])
{
    int i, zi = 0;
    for (i = 0;i < SIZE;i++)
    {
        if (!isPrime(X[i]))
        {
            Z[zi] = X[i];
            zi++;
        }
    }
    return zi;
}

// поиск минимального
int minimum(int A[SIZE], int size)
{
    int i, min, index = 0;
    min = abs(A[0]);
    for (i = 1;i < size;i++)
    {
        if (abs(A[i]) < min)
        {
            min = abs(A[i]);
            index = i;
        }
    }
    return index;
}

// удаление минимального
void del(int A[SIZE], int index)
{
    int i;
    for (i = 0; i < SIZE - 1; i++)
    {
        if (i >= index)
        {
            A[i] = A[i + 1];
        }
    }
}

int main()
{
    setlocale(LC_ALL, "Russian");
    int X[SIZE];

    // ввод массива с клавиатуры
    for (int i = 0; i < SIZE; i++)
    {
        cin >> X[i];
    }

    int Y[SIZE], Z[SIZE];
    int i, ySIZE, zSIZE, minIndexY, minIndexZ;

    // заполняем массивы по условию
    ySIZE = fill_Y(Y, X);
    zSIZE = fill_Z(Z, X);

    cout << "Простые числа: " << endl;
    for (i = 0;i < ySIZE;i++)
    {
        cout << Y[i] << " ";
    }
    cout << endl;

    cout << "Составные числа: " << endl;
    for (i = 0;i < zSIZE;i++)
    {
        cout << Z[i] << " ";
    }
    cout << endl;
    
    // находим минимальное
    minIndexY = minimum(Y, ySIZE);
    minIndexZ = minimum(Z, zSIZE);

    // удаляем минимальное
    del(Y, minIndexY);
    del(Z, minIndexZ);

    cout << "Простые числа без минимального: " << endl;
    for (i = 0;i < ySIZE - 1;i++)
    {
        cout << Y[i] << " ";
    }
    cout << endl;

    cout << "Составные числа без минимального: " << endl;
    for (i = 0;i < zSIZE - 1;i++)
    {
        cout << Z[i] << " ";
    }
    cout << endl;
}