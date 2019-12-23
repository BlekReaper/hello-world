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
		int  n, l;
		cout << "Ведите n: ";
		cin >> n;
		int *arrayA = new int[n];
		int *arrayB = new int[n];
		cout << "Ведите элементы массива A :" << "\n";
		for (int i = 0; i < n; i++)
		{
			cin >> arrayA[i];
		}
		cout << "Ведите элементы массива B :" << "\n";
		for (int i = 0; i < n; i++)
		{
			cin >> arrayB[i];
		}
		for (int i = 0; i < n; i++)
		{
			l = arrayB[i];
			arrayB[i] = arrayA[i];
			arrayA[i] = l;
		}
		cout << "A:";
		for (int i = 0; i < n; i++)
		{
			cout << arrayA[i] << " ";
		}
		cout << "B:";
		for (int i = 0; i < n; i++)
		{
			cout << arrayB[i] << " ";
		}

	}
	break;

	case 2:
	{
		double  n, l;
		double k = 0;
		cout << "Ведите n : ";
		cin >> n;
		int *mass = new int[n];
		l = 0;
		cout << "Ведите элементы массива :" << "\n";
		for (int i = 0; i < n; i++)
		{
			cin >> mass[i];
		}
		cout << "Mass B:";
		for (int i = 0; i < n; i++)
		{
			l = l + mass[i];
			k = l / (i + 1);
			cout << k << " ";
		}
	}
	break;

	case 3:
	{
		int n, l;
		cout << "Ведите n: ";
		cin >> n;
		int *mass = new int[n];
		cout << "Ведите элементы массива :" << "\n";
		for (int i = 0; i < n; i++)
		{
			cin >> mass[i];
		}
		for (int i = 0; i < n; i++)
		{
			if ((mass[i] % 2) != 0)
			{
				l = mass[i];
			}
		}
		for (int i = 0; i < n; i++)
		{
			if ((mass[i] % 2) != 0)
			{
				mass[i] = mass[i] + l;
			}
			cout << mass[i] << " ";
		}
		break;
	}
	case 4:
	{
		int n, max, min, i;
		cout << "Ведите n:";
		cin >> n;
		min = 0;
		max = 0;
		int *a = new int[n];
		for (i = 0; i < n; i++)
		{
			cin >> a[i];

			if (a[i] > a[max])
				max = i;
			if (a[i] < a[min])
				min = i;
		}

		if (min > max)
			for (i = max + 1; i < min; i++)
			{
				a[i] = 0;
			}
		else
			for (i = min + 1; i < max; i++)
			{
				a[i] = 0;
			}
		cout << "N:";
		for (i = 0; i < n; i++)
		{
			cout << a[i] << " ";
		}
		break;
	}

	case 5:
	{
		int n, l;
		cout << "Ведите n:";
		cin >> n;
		int *mass = new int[n];
		cout << "Ведите элементы массива :" << "\n";
		for (int i = 0; i < n; i++)
		{
			cin >> mass[i];
		}

		mass[n] = mass[0];

		l = mass[0];

		for (int i = 1; i < n + 1; ++i)
		{
			if (mass[i] <= l && mass[i + 1] >= l)
			{
				mass[i - 1] = mass[i];
				mass[i] = l;
				break;
			}

			else
			{
				mass[i - 1] = mass[i];
			}
		}

		cout << "Новый масив:";
		for (int i = 0; i < n; ++i)
			cout << mass[i] << " ";
	}
	default:
		break;
	}
}