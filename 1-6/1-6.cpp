#include <iostream>
#include <algorithm>
#include <random>
using namespace std;

// функция, которая вставляет после каждого положительного элемента ноль
void push(vector<int>& arr)
{
    // цикл по элементам программы
    for (size_t i = 0; i < arr.size(); ++i)
    {
        // если элемент положительный, вставляем после него 0
        if (0 < arr[i]) { arr.insert(arr.begin() + i + 1, 0); }
    }
}

// функция для нахождения максимума
int max(vector<int>& arr)
{
    int max = -100000000;
    for (int i = 0; i < arr.size(); i++)
    {
        // если элемент больше максимума
        if (arr[i] > max)
        {
            // присваиваем новый максимум
            max = arr[i];
        }
    }

    return max;
}

// функция для нахождения среднего арифметического массива
double sr(vector<int>& arr)
{
    double summa = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        // складываем все числа
        summa += arr[i];
    }
    // делим сумму чисел на их количество, получаем среднее
    return summa / arr.size();
}

int main(void)
{
    setlocale(LC_ALL, "Russian");
    size_t SIZE = 10;
    vector<int>arr(SIZE);

    // вводим с клавиатуры массив
    for (int i = 0; i < SIZE; i++)
    {
        cin >> arr[i];
    }

    cout << "Среднее арифметическое до добавления нулей: " << sr(arr) << endl;

    // добавляем нули после положительных чисел
    push(arr);

    cout << "Среднее арифметическое после добавления нулей: " << sr(arr) << endl;
}