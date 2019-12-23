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
	case 1:
	{
		int n, b, i;
		cout << "Введите размер массива: ";
		cin >> n;
		cout << "Заполните масив:" << "\n";
		b = 0;
		int *mass = new int[n];
		for (i = 0; i < n; i++)
		{
			cin >> mass[i];
		}
		for (i = 0; i < n; i++)
		{
			if (mass[b] != mass[i])
			{
				b++;
				mass[b] = mass[i];
			}
		}
		cout << "Преобразованный массив A:" << endl;
		for (i = 0; i <= b; i++)
		{
			cout << mass[i] << endl;
		}
		break;
	}
	case 2:
	{
		int n, i, m, a, b, c, j;
		cout << "Введите размер массива N: ";
		cin >> n;
		cout << "Заполните масив:" << "\n";
		m = 0;
		a = 0;
		int *mass = new int[n];
		for (i = 0; i < n; i++)
		{
			cin >> mass[i];
		}
		for (i = 0; i < n - m; i++)
		{
			b = 0;
			for (j = 0; j < n; j++)
			{
				if (mass[i] == mass[j])
					b++;

			}
			if (b == 2)
			{
				m++;
				for (j = i; j < n - 1; j++)
				{
					c = mass[j + 1];
					mass[j + 1] = mass[j];
					mass[j] = c;
				}
				i--;
			}
			a++;
		}
		cout << "Преобразованный массив:" << endl;
		for (i = 0; i < n - m; i++)
		{
			cout << mass[i] << endl;
		}
		cout << "\n" << "Размер массива: " << (a - m);
	}
	break;
	case 3:
	{
		int n, m, min, max, i;
		cout << "Введите размер массива N: ";
		cin >> n;
		cout << "заполните его: ";
		m = 0;

		int *mass2 = new int[n + 2];
		int *mass = new int[n];
		for (i = 0; i < n; i++)
		{
			cin >> mass[i];
		}
		min = mass[1];
		max = mass[1];
		for (i = 0; i < n; i++)
		{
			if (mass[i] < min)
				min = mass[i];
			if (mass[i] > max)
				max = mass[i];
		}
		for (i = 0; i < n; i++)
		{
			if (mass[i] == max)
			{
				mass2[i + m] = mass[i];
				mass2[i + m + 1] = 0;
				max++;
				m++;
			}
			else if (mass[i] == min)
			{
				mass2[i + m] = 0;
				mass2[i + m + 1] = mass[i];
				min--;
				m++;
			}
			else mass2[i + m] = mass[i];
		}
		cout << "Преобразованный массив:" << endl;
		for (i = 0; i < n + 2; i++)
		{
			cout << mass2[i] << endl;
		}
	}
	break;
	case 4:
	{
		int n, m, min, i, z;
		cout << "Введите размер массива N:";
		cin >> n;
		cout << "заполните его: ";
		m = 0;

		int *mass = new int[n];
		for (i = 0; i < n; i++)
		{
			cin >> mass[i];
		}
		min = mass[1];
		int *mass2 = new int[n * 2];
		for (i = 0; i < n; i++)
		{
			if (mass[i] < 0)
			{
				mass2[i + m] = mass[i];
				mass2[i + m + 1] = 0;
				m++;
			}
			else mass2[i + m] = mass[i];
		}
		cout << "Преобразованный массив:" << endl;
		for (i = 0; i < n + m; i++)
		{
			cout << mass2[i] << endl;
		}
	}
	break;
	case 5:
	{
		int n, m, z, max, i;
		cout << "Введите размер массива N и заполните его: ";
		cin >> n;
		m = 0;
		z = 0;

		int *mass = new int[n];
		for (i = 0; i < n; i++)
		{
			cin >> mass[i];
			if (mass[i] > 0)
				z++;
		}
		max = mass[1];
		int *mass2 = new int[n + z];
		for (i = 0; i < n; i++)
		{
			if (mass[i] > 0)
			{
				mass2[i + m] = 0;
				mass2[i + m + 1] = mass[i];
				m++;
			}
			else mass2[i + m] = mass[i];
		}
		cout << "Преобразованный массив:" << endl;
		for (i = 0; i < n + m; i++)
		{
			cout << mass2[i] << endl;
		}
	}
	break;
	default:
		break;
	}
}