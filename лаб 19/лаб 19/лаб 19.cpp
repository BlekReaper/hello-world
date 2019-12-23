#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	double x, y, sum, raz;
	int menu, a, b, c, d, i, j, k, m, n, z, min, max;
	double* arr, *brr, *crr;
	int* drr, *grr, *hrr, *urr;
	int** mass;

	cout << "Ведите номер задания : ";
	cin >> a;
	switch (a)
	{
	case 1:
	{
		cout << "Введите количество столбцов и строк матрицы (M, N): ";
		cin >> m >> n;
		mass = new int*[n];
		for (i = 0; i < n; i++)
			mass[i] = new int[m];
		cout << "Заполните матрицу " << m << "x" << n << ":" << endl;
		for (i = 0; i < n; i++)
			for (j = 0; j < m; j++)
				cin >> mass[i][j];
		min = 0;
		max = 0;
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < m; j++)
			{
				if (mass[i][j] < mass[i][min]) min = j;
				if (mass[i][j] > mass[i][max]) max = j;
			}
			c = mass[i][min];
			mass[i][min] = mass[i][max];
			mass[i][max] = c;
		}
		cout << "Преобразованная матрица: " << endl;
		for (i = 0; i < n; i++)
			for (j = 0; j < m; j++)
			{
				cout << mass[i][j] << " ";
				if (j == m - 1) cout << endl;
			}
	}
	break;

	case 2:
	{
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
		min = 99999;
		max = -99999;
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < m; j++)
			{
				if (mass[i][j] < min)
				{
					min = mass[i][j];
					d = j;
				}
				if (mass[i][j] > max)
				{
					max = mass[i][j];
					b = j;
				}
			}
		}
		for (i = 0; i < n; i++)
		{
			c = mass[i][b];
			mass[i][b] = mass[i][d];
			mass[i][d] = c;
		}
		cout << "Преобразованная матрица: " << endl;
		for (i = 0; i < n; i++)
			for (j = 0; j < m; j++)
			{
				cout << mass[i][j] << " ";
				if (j == m - 1) cout << endl;
			}
	} break;

	case 3:
	{
		cout << "Введите чётное количество столбцов и строк матрицы (M, N): ";
		cin >> m >> n;
		mass = new int*[n];
		for (i = 0; i < n; i++)
			mass[i] = new int[m];
		cout << "Заполните матрицу " << m << "x" << n << ":" << endl;
		for (i = 0; i < n; i++)
			for (j = 0; j < m; j++)
				cin >> mass[i][j];
		for (i = 0; i < n / 2; i++)
		{
			for (j = 0; j < m / 2; j++)
			{
				c = mass[i][j];
				mass[i][j] = mass[n / 2 + i][m / 2 + j];
				mass[n / 2 + i][m / 2 + j] = c;
			}
		}
		cout << "Преобразованная матрица: " << endl;
		for (i = 0; i < n; i++)
			for (j = 0; j < m; j++)
			{
				cout << mass[i][j] << " ";
				if (j == m - 1) cout << endl;
			}
	} break;

	case 4:
	{
		cout << "Введите количество столбцов и строк матрицы (M, N): ";
		cin >> m >> n;
		mass = new int*[n];
		for (i = 0; i < n; i++)
			mass[i] = new int[m];
		cout << "Заполните матрицу " << m << "x" << n << ":" << endl;
		for (i = 0; i < n; i++)
			for (j = 0; j < m; j++)
				cin >> mass[i][j];
		for (k = 0; k < n; k++)
		{
			for (i = 1; i < n; i++)
			{
				if (mass[i - 1][0] > mass[i][0])
					for (j = 0; j < m; j++)
					{
						c = mass[i - 1][j];
						mass[i - 1][j] = mass[i][j];
						mass[i][j] = c;
					}
			}
		}
		cout << "Преобразованная матрица: " << endl;
		for (i = 0; i < n; i++)
			for (j = 0; j < m; j++)
			{
				cout << mass[i][j] << " ";
				if (j == m - 1) cout << endl;
			}
	} break;
	case 5:
	{
		cout << "Введите порядок матрицы M: ";
		cin >> m;
		drr = new int[m * 2 - 1];
		mass = new int*[m];
		for (i = 0; i < m; i++)
			mass[i] = new int[m];
		cout << "Заполните матрицу " << m << "x" << m << ":" << endl;
		for (i = 0; i < m; i++)
			for (j = 0; j < m; j++)
				cin >> mass[i][j];
		c = m;
		sum = 0;
		for (k = 0; k < m * 2 - 1; k++)
		{
			for (i = 0; i < m; i++)
			{
				for (j = 0; j < m; j++)
				{
					if (i == j + c - 1)
					{
						sum += mass[i][j];
					}
				}
			}
			drr[k] = sum;
			sum = 0;
			c--;
		}
		cout << "Суммы элементов диагоналей: " << endl;
		for (k = 0; k < m * 2 - 1; k++) cout << "Сумма элементов " << k + 1 << "-й диагонали: " << drr[k] << "." << endl;
	}
	break;

	default:
		break;
	}

}