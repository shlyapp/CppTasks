#include <iostream>

using namespace std;

// алгоритм: вводим массив, при помощи сортировки пузырьком сортируем в порядке возрастания модулей элементов
// находим сумму и произведение отрицательных элементов

int main()
{
    setlocale(LC_ALL, "Russian");
    // размер массива
    const int SIZE = 10;
    int arr[SIZE];

    // ввод массива с клавиатуры
    for (int i = 0; i < SIZE; i++)
    {
        cin >> arr[i];
    }

    cout << "Массив до сортировки: " << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << arr[i] << " ";
    }

    // пузырьковая сортировка массива по возрастанию модулей элементов
    int temp;
    for (int i = 0; i < SIZE - 1; i++)
    {
        for (int j = 0; j < SIZE - i - 1; j++)
        {
            if (abs(arr[j]) > abs(arr[j + 1]))
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    cout << "Массив после сортировки: " << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;

    // находим сумму и произведени отрицательных элементов массива
    int summa = 0;
    int proiz = 0;
    for (int i = 0; i < SIZE; i++)
    {
        if (arr[i] < 0)
        {
            summa += arr[i];
            proiz *= arr[i];
        }
    }

    cout << "Сумма отрицательных элементов: " << summa << endl;
    cout << "Произведение отрицательных элементов: " << proiz << endl;
}