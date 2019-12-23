#include "pch.h"
#include <iostream>
using namespace std;
void Swap1(double&, double&);
void Swap2(double&, double&);
void Swap3(double&, double&);




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
		double a, b;
		cout << "Ведите a,b : ";
		cin >> a >> b;
		Swap1(b, a);
		cout << "a=" << a << endl;
		cout << "b=" << b << endl;
		system("pause");
		return 0;

	}
	break;

	case 2:
	{
		double a, b, c, f;
		cout << "Ведите a,b,c : ";
		cin >> a >> b >> c;
		Swap2(a, b);
		Swap2(c, a);

		cout << "a=" << a << endl;
		cout << "b=" << b << endl;
		cout << "c=" << c << endl;
		system("pause");
		return 0;

	}
	break;

	case 3:
	{
		double a, b, c, f;
		cout << "Ведите a,b,c : ";
		cin >> a >> b >> c;
		Swap3(c, b);
		Swap3(a, c);

		cout << "a=" << a << endl;
		cout << "b=" << b << endl;
		cout << "c=" << c << endl;
		system("pause");
		return 0;

	}
	break;

	case 4:
	{
		setlocale(LC_ALL, "rus");
		double x;
		cout << "Ведите x : ";
		cin >> x;
		cout << "Y=" << 3 * (pow(x, 6)) - 6 * (pow(x, 2)) - 7 << endl;
		system("pause");
		return 0;

	}
	break;

	case 5:
	{
		setlocale(LC_ALL, "rus");
		double x;
		cout << "Ведите x : ";
		cin >> x;
		cout << "Y=" << 4 * (pow((x - 3), 6)) - 7 * (pow((x - 3), 3)) + 2 << endl;
		system("pause");
		return 0;

	}
	break;

	case 6:
	{
		double a, c;
		cout << "Ведите a : ";
		cin >> a;
		c = a * a;
		a = c * c;
		a = a * a;
		cout << "a=" << a << endl;
		system("pause");
		return 0;
	}
	break;

	case  7:
	{
		double a, c, b;
		cout << "Ведите a : ";
		cin >> a;
		c = a * a *a;
		b = c * c;
		a = b * b * c;
		cout << "a=" << a << endl;
		system("pause");
		return 0;

	}

	default:
		break;
	}
}

void Swap3(double& x, double& y)
{
	double blek = x;
	x = y;
	y = blek;
}

void Swap2(double& x, double& y)
{
	double blek = x;
	x = y;
	y = blek;
}

void Swap1(double& x, double& y)
{
	double vbn = x;
	x = y;
	y = vbn;
}