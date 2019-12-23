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
		int  n, k, l;
		cout << "Ведите n,k,l : ";
		cin >> n >> k >> l;
		int *mass = new int[n];
		double m = 0;
		cout << "Ведите элементы массива :" << "\n";
		for (int i = 0; i < n; i++)
		{
			cin >> mass[i];
		}
		for (int i = k; i <= l; i++)
		{
			m = mass[i] + m;

		}
		m = m / (l - k + 1);
		cout << "m=" << m;
	}
	break;

	case 2:
	{
		int  n, l;
		cout << "Ведите n : ";
		cin >> n;
		int *mass = new int[n];
		double m = 0;
		cout << "Ведите элементы массива :" << "\n";
		for (int i = 0; i < n; i++)
		{
			cin >> mass[i];
		}
		l = mass[1] - mass[0];
		for (int i = 2; i < n; i++)
		{
			if ((mass[i] - mass[i - 1]) != l)
			{
				l = 0;
			}


		}
		cout << "ответ:" << l;
	}
	break;

	case 3:
	{
		int n, min;
		cout << "Ведите n: ";
		cin >> n;
		int *A = new int[n];
		cout << "Ведите элементы массива :" << "\n";
		for (int i = 0; i < n; i++)
		{
			cin >> A[i];
			min = A[1];
		}
		for (int i = 0; i < n; i++)
		{
			if (A[i] < min && A[i] % 2 == 0)
				min = A[i];
		}
		cout << "Min = " << min << endl;
	}
	case 4:
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
		l = mass[0];
		for (int i = 1; i < n; i++)
		{
			if (mass[i + 1] < mass[i] && mass[i] > mass[i - 1])
			{
				l = mass[i];
			}
		}
		cout << "ответ:" << l;
	}
	break;
	case 5:
	{
		int  n, k, l;
		cout << "Ведите n : ";
		cin >> n;
		int *mass = new int[n];
		double m = 0;
		cout << "Ведите элементы массива :" << "\n";
		for (int i = 0; i < n; i++)
		{
			cin >> mass[i];
		}
		for (int i = 0; i < (n - 1); i++)
		{
			for (int j = 1; j < n; j++)
			{
				if ((mass[i] == mass[j]) && (i != j))
				{
					l = i;
					k = j;
				}
			}
		}
		if (l > k)
			cout << "ответ:" << l << " " << k;
		else
			cout << "ответ:" << k << " " << l;
	}
	default:
		break;
	}
}
