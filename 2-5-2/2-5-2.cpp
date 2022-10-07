#include <iostream>

using namespace std;

// алгоритм: вводим матрицу, зеркально отражаем ее
// проходим по столбцу, если предыдущий элемент больше последующего, то столбец убывающий

int main()
{
	setlocale(LC_ALL, "Russian");
	// размер матрицы
	const int SIZE = 3;
	int arr[SIZE][SIZE];

	// ввод матрицы с клавиатуры
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			cout << "arr[" << i << "][" << j << "]: ";
			cin >> arr[i][j];
		}
	}

	cout << "Массив до изменения: " << endl;
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}

	// зеркалим массив относительно главной диагонали
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			if (i > j)
			{
				swap(arr[i][j], arr[j][i]);
			}
		}	
	}
		
	cout << "Массив после изменения: " << endl;
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}

	// проверяем на убывающий столбец
	for (int i = 0; i < SIZE; i++)
	{
		bool flag = true;
		// если последующий элемент меньше
		for (int j = 0; j < SIZE - 1; j++)
		{
			if (!(arr[j][i] > arr[j + 1][i]))
			{
				flag = false;
			}
		}
		// то столбец убывающий
		if (flag)
		{
			cout << "Столбец " << i + 1 << " убыващий" << endl;
		}
	}
}