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
		double Pi;
		cout << "Ведите a: ";
		cin >> a;
		Pi = 3, 14;
		if (0 < a && a < 360)
		{

			cout << " радианты = " << (Pi * a) / 180 << endl;
		}
		else {
			cout << "не соответствие условию " << endl;
		}
		system("pause");
		return 0;
	}
	break;

	case 2:
	{
		int a;
		double Pi;
		cout << "Ведите a: ";
		cin >> a;
		Pi = 3, 14;
		if (0 < a && a < (2 * Pi))
		{

			cout << " градусы = " << (180 * a) / Pi << endl;
		}
		else {
			cout << "не соответствие условию " << endl;
		}
		system("pause");
		return 0;
	}

	break;

	case 3:
	{
		double X, A, Y;
		cout << "Ведите x,a,y: ";
		cin >> X >> A >> Y;
		A = A / X;
		cout << "Стоимость 1 кг конфе " << A << endl;
		A = A * Y;
		cout << "Стоимость Y кг конфет " << A << endl;

		system("pause");
		return 0;
	}
	break;

	case 4:
	{
		double V1, V2, S, T;
		cout << "V1, V2, S, T ";
		cin >> V1 >> V2 >> S >> T;
		S = S + (V1 + V2) * T;
		cout << "расстояние между ними через T часов " << S << endl;

		system("pause");
		return 0;
	}
	break;

	case 5:
	{
		double a, b, x;
		cout << "Ведите a, b: ";
		cin >> a >> b;
		if (a != 0)
		{
			x = -b / a;
			cout << " x = " << x << endl;
		}
		else {
			cout << "не соответствие условию " << endl;
		}
		system("pause");
		return 0;
	}
	break;

	case 6:
	{
		double A1, B1, C1, A2, C2, B2, d, x, y;
		cout << "Ведите A1,B1,C1,A2,B2,C2: ";
		cin >> A1 >> B1 >> C1 >> A2 >> B2 >> C2;
		d = A1 * B2 - A2 * B1;
		x = (C1*B2 - C2 * B1) / d;
		y = (A1*C2 - A2 * C1) / d;
		cout << " x = " << x << endl;
		cout << " y = " << y << endl;
		system("pause");
		return 0;
	}

	default:
		break;
	}
}
