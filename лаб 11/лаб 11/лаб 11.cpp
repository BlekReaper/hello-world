#include "pch.h"
#include <iostream>
using namespace std;

int form(int n);

int NOD(int a, int b);

int sum(int x);

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
		int a, b;
		cout << "Введите a,b:";
		cin >> a >> b;
		for (int i = a; i <= b; i++)
		{
			for (int j = 0; j < i; j++)
			{
				cout << i << " ";
			}

		}
		break;
	}

	case 2:
	{
		int a, b;
		cout << "Ведите a,b : ";
		cin >> a >> b;
		while (a >= b)
		{
			a -= b;
		}
		cout << "длинa незанятой части:" << a << endl;

		break;
	}
	case 3:
	{
		int n;
		cout << "N = ";
		cin >> n;
		int k = 2;
		while (sum(k) < n)
		{
			k++;
		}
		cout << "k = " << k << endl;
		cout << "sum = " << sum(k);

		break;
	}
	case 4:
	{
		double p;
		cout << "Введите процент по вкладу :";
		cin >> p;
		if (p > 0 && p < 25)
		{

			double d = 1000;
			int c = 0;
			while (d < 1100)
			{
				d += d / p;
				c++;
			}

			cout << " До превышения лимита вклада на сумму 1100р. понадобится: " << c << " месяца " << "\n Cумма вклада соcтавит: " << d << " руб.";
		}
		else
		{
			cout << "несоответствие условию  ";
		}
		break;
	}
	case 5:
	{
		int a, b;
		cout << "Введите a,b : ";
		cin >> a >> b;

		if (b == 0)
			cout << a << endl;
		else
			cout << NOD(a, b) << endl;

	}
	case 6:
	{


		int n, r, b, k, c;
		cout << "Введите N ";
		cin >> n;
		k = 2;
		b = 1;
		c = 1;
		r = 0;
		while (r <= n)
		{
			r = b + c;
			b = c;
			c = r;
			k = k + 1;
		}
		cout << "порядковый номер = " << k;


	}
	default:
		break;
	}
}
// для 3
int sum(int x)
{
	return x * (x + 1) / 2;
}

// для 5
int NOD(int a, int b)
{
	while (a != b)
	{
		if (a > b)
			a -= b;
		else
			b -= a;
	}
	return 0;
}