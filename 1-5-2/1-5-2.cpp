#include <iostream>

using namespace std;

// алгоритм: вводим матрицу
// если номер столбца четный, то заменяем первый элемент столбца на среднее между простыми числами
// если номер стольца нечетный, то заменяем первый элемент стобца на среднее между составными числами
// примечание: в жизни нумерация с 1 столбцов, в программе с 0

// функция: является ли число простым
bool isSimple(int num)
{
    // если число не имеет делителей, кроме самого себя и единицы, то оно простое
    bool isSimple = true;
    for (int i = 2; i <= 9 && isSimple; i++)
    {
        if (i != num)
            if (num % i == 0)
                isSimple = false;
    }
    return isSimple;
}

int main()
{
    setlocale(LC_ALL, "Russian");
    // размер матрицы
    const int SIZE = 3;
    int arr[SIZE][SIZE];

    // вводим с клавиатуры массив
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            cout << "arr[" << i << "][" << j << "]: ";
            cin >> arr[i][j];
        }
    }

    cout << "Исходный массив: " << endl;
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // цикл по столбцам
    for (int i = 0; i < SIZE; i++)
    {
        // количество элементов и сумма
        int counter = 0;
        int summa = 0;
        // цикл по элементам в столбце
        for (int j = 0; j < SIZE; j++)
        {
            // если столбец четный
            if (i % 2 == 0)
            {
                // а число простое
                if (isSimple(arr[j][i]))
                {
                    // увеличиваем счетчик и сумму
                    counter++;
                    summa += arr[j][i];
                }
            }
            // иначе, если столбец нечетный
            else
            {
                // и число составное
                if (!isSimple(arr[j][i]))
                {
                    // увеличиваем счетчик и сумму
                    counter++;
                    summa += arr[j][i];
                }
            }
        }
        // меняем первый элемент столбца
        arr[0][i] = summa / counter;
    }

    cout << "Измененный массив: " << endl;
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}