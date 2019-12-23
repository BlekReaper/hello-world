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
		int n;
		cout << "Ведите n : ";
		cin >> n;
		int *mass = new int[n];
		for (int i = 0; i <= n; i++)
		{
			mass[i] = i;
			cout << mass[i] << " ";
		}
		return 0;
	}
	break;

	case 2:
	{
		int n, a, d;
		cout << "Ведите n,a,d : ";
		cin >> n >> a >> d;
		int *mass = new int[n];
		for (int i = 0; i < n; i++)
		{
			mass[i] = a * pow(d, i);
			cout << mass[i] << " ";
		}
	}
	break;

	case 3:
	{
		int a, b, n, r;
		cout << "Ведите n,a,b : ";
		cin >> n >> a >> b;
		r = a + b;
		int *mass = new int[n];
		for (int i = 0; i < n; i++)
		{
			if (i == 0)
				mass[i] = a;
			if (i == 1)
				mass[i] = b;
			if (i == 2)
				mass[i] = r;
			if (i > 2)
			{
				r += r;
				mass[i] = r;
			}
			cout << mass[i] << " ";
		}

	}
	break;

	case 4:
	{
		int n;
		cout << "Ведите n : ";
		cin >> n;
		int *mass = new int[n];
		cout << "Ведите элементы массива :" << "\n";
		for (int i = 0; i < n; i++)
		{
			cin >> mass[i];
		}
		for (int i = 0; i < n / 2; i++)
		{
			cout << mass[i] << " ";
			cout << mass[n - i - 1] << " ";
		}
		if (n % 2 != 0)
		{
			cout << mass[n / 2];
		}
	}
	break;

	case 5:
	{
		int  n, l;
		cout << "Ведите n : ";
		cin >> n;
		int *mass = new int[n];
		cout << "Ведите элементы массива :" << "\n";
		for (int i = 0; i < n; i++)
		{
			cin >> mass[i];
		}

		for (int i = 0; i < n; i++)
		{

			if ((i % 2) == 0)
			{
				cout << mass[i] << " ";
			}
		}
		for (int i = 0; i < n; i++)
		{
			if ((i % 2) != 0)
			{
				cout << mass[n - i - 1] << " ";
			}

		}

	}
	break;


	default:
		break;
	}
}
