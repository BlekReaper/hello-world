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
		int a;
		cout << "Введите стоимость: ";
		cin >> a;
		for (double i = 0.1; i <= 1; i += 0.1)
		{
			cout << "Стоимость " << i << " кг конфет = " << a * i << endl;
		}
	}
	break;

	case 2:
	{
		double a = 1;
		unsigned int n;

		cout << "Введите число: ";
		cin >> n;
		if (n > 0)
		{
			for (double i = 1, j = 1.1; i <= n; i++, j += 0.1)
				a = a * j;
			cout << a << endl;
		}
		else
			cout << "Несоответствие условию ";

	}
	break;

	case 3:
	{
		int N, i, A;
		cout << "Введите N: ";
		cin >> N;
		if (N > 0)
		{
			A = 0;
			for (i = 1; i <= N; i++)
			{
				A = A + 2 * i - 1;
				cout << "ответ:" << A << endl;
			}
		}
		else
			cout << "Несоответствие условию ";
	}
	break;

	case 4:
	{
		int N, i;
		double A, b, c;
		cout << "Введите A и N :";
		cin >> A >> N;
		if (N > 0)
		{
			b = 1;
			c = 1;
			for (i = 1; i <= N; i++)
			{
				b = b * A;
				c = c + b;
			}

			cout << "ответ:" << c << endl;
		}
		else
			cout << "Несоответствие условию ";
	}
	break;

	case 5:
	{
		double a, s, w;
		int z, i, n;
		cout << "Введите a и n :";
		cin >> a >> n;
		if (n > 0)
		{
			w = 1;
			s = 1;
			z = 1;
			for (i = 1; i <= n; i++)
			{
				z = -z;
				w = w * a;
				s = s + z * w;
			}
			cout << "ответ:" << s << endl;
		}
		else
			cout << "Несоответствие условию ";
	}

	default:
		break;
	}
}