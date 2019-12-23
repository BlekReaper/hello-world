#include "pch.h"
#include <iostream>
using namespace std;



int main()
{
	setlocale(LC_ALL, "rus");
	int a;
	cout << "Ведите номер задания : ";
	cin >> a;
	switch (a)
	{
		int n, i, j, m;
		int **mass;
	case 1:
	{

		cout << "Введите количество столбцов и строк матрицы (N): ";
		cin >> n;
		mass = new int*[n];
		for (i = 0; i < n; i++)
			mass[i] = new int[n];
		cout << "Заполните матрицу " << n << "x" << n << ":" << endl;
		for (i = 0; i < n; i++)
			for (j = 0; j < n; j++)
				cin >> mass[i][j];
		for (j = 0; j <= n; j++, n--)

		{

			for (i = j; i < n; i++)

			{

				cout << mass[j][i];

			}

			for (i = j + 1; i < n; i++)

			{

				cout << mass[i][n - j - 1];

			}

			for (i = j + 1; i < n; i++)

			{

				cout << mass[n - j - 1][n - i - 1];

			}

			for (i = j + 1; i < n - 1; i++)

			{

				cout << mass[n - i - 1][j];

			}

		}
		cout << "Преобразованная матрица: " << endl;
		for (i = 0; i < n; i++)
			for (j = 0; j < n; j++)
			{
				cout << mass[i][j] << " ";
				if (j == n - 1) cout << endl;
			}
	}
	case 2:
	{
		int S, P, k;
		S = 0;
		P = 1;
		cout << "Введите количество столбцов и строк матрицы (M, N): ";
		cin >> m >> n;
		mass = new int*[n];
		for (i = 0; i < n; i++)
			mass[i] = new int[m];
		cout << "Заполните матрицу " << m << "x" << n << ":" << endl;
		for (i = 0; i < n; i++)
			for (j = 0; j < m; j++)
				cin >> mass[i][j];
		cout << "Введите номер строки (K):";
		cin >> k;
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < m; j++)
			{
				if ((k - 1) == i)
				{
					S += mass[i][j];
					P *= mass[i][j];
				}

			}
		}
		cout << "Сумма:" << S << endl;
		cout << "Произведение:" << P << endl;
	}
	case 3:
	{
		{
			int max, min, k, S;
			S = 0;
			k = 0;
			cout << "Введите количество столбцов и строк матрицы (M, N): ";
			cin >> m >> n;
			mass = new int*[n];
			for (i = 0; i < n; i++)
			{
				mass[i] = new int[m];
			}
			cout << "Заполните матрицу " << m << "x" << n << ":" << endl;
			for (i = 0; i < n; i++)
				for (j = 0; j < m; j++)
					cin >> mass[i][j];
			min = 0;
			max = 0;
			for (j = 0; j < n; j++)
			{
				S = 1;
				for (i = 0; i < m; i++)
				{
					S *= mass[i][j];
				}
				if (j == 0)
				{
					min = S;
					max = j + 1;
				}
				else
				{
					if (S < min)
					{
						min = S;
						max = j + 1;
					}
				}
			}
			cout << "Номер столбца с наименьшим, произведением элементов:" << max << endl;
			cout << "Значение наименьшего произведения:" << min << endl;

		}
		break;
	}
	case 4:
	{
		int max, min, k, S;
		S = 0;
		k = 0;
		cout << "Введите количество столбцов и строк матрицы (M, N): ";
		cin >> m >> n;
		mass = new int*[n];
		for (i = 0; i < n; i++)
		{
			mass[i] = new int[m];
		}
		cout << "Заполните матрицу " << m << "x" << n << ":" << endl;
		for (i = 0; i < n; i++)
			for (j = 0; j < m; j++)
				cin >> mass[i][j];
		for (j = 0; j < n; j++)
		{
			S = 0;
			for (i = 0; i < m; i++)
			{
				S += mass[i][j];
			}
			S = S / n;
			for (i = 0; i < m; i++)
			{
				if (S < mass[i][j])
				{
					k++;
					cout << "В " << (j + 1) << " столбце " << k << " элементов, больше среднего арифметического: " << mass[i][j] << endl;
				}
			}
		}
	}
	case 5:
	{
		int k, f;
		k = 0;
		f = 99999;
		cout << "Введите количество столбцов и строк матрицы (M, N): ";
		cin >> m >> n;
		mass = new int*[n];
		for (i = 0; i < n; i++)
		{
			mass[i] = new int[m];
		}
		cout << "Заполните матрицу " << m << "x" << n << ":" << endl;
		for (i = 0; i < n; i++)
			for (j = 0; j < m; j++)
				cin >> mass[i][j];
		for (j = 0; j < n; j++)
		{
			k = 0;

			for (i = 0; i < m; i++)
			{
				if (0 > mass[i][j])
				{
					k++;
				}
			}
			if (k == n && f > j)
			{
				f = j;
				cout << "номер столбца, содержащий только нечетные числа:" << j + 1 << endl;
			}

		}
		if (f == 99999)
			cout << "Ответ: 0" << endl;
	}
	default:
		break;
	}

}