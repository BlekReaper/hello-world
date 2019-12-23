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
		int a = 0, b = 0;
		cout << "Ведите a, b: ";
		cin >> a >> b;
		cout << "S = " << a * b << std::endl;
		cout << "P = " << 2 * (a + b) << std::endl;
		system("pause");
		return 0;
	}
	break;

	case 2:
	{
		int d;
		double pi, L;
		pi = 3.14;
		cout << "Ведите d: ";
		cin >> d;
		cout << "L = " << pi * d << endl;
		system("pause");
		return 0;
	}

	break;

	case 3:
	{
		int a, b;
		double Cp;
		cout << "Ведите a,b: ";
		cin >> a >> b;
		Cp = (double)(a + b) / 2;
		cout << "Cp = " << Cp << endl;
		system("pause");
		return 0;
	}
	break;

	case 4:
	{
		int a, b;
		double za;
		cout << "Ведите a,b: ";
		cin >> a >> b;
		a = a * a;
		b = b * b;
		cout << " Cm = " << a + b << endl;
		cout << " pa = " << a - b << endl;
		za = (double)a / b;
		cout << " Ча = " << za << endl;
		cout << " Пр = " << a * b << endl;
		system("pause");
		return 0;
	}
	break;

	case 5:
	{
		int a, b;
		double za;
		cout << "Ведите a,b: ";
		cin >> a >> b;
		a = abs(a);
		b = abs(b);
		cout << " Cm = " << a + b << endl;
		cout << " pa = " << a - b << endl;
		za = (double)a / b;
		cout << " Ча = " << za << endl;
		cout << " Пр = " << a * b << endl;
		system("pause");
		return 0;
	}
	break;


	default:
		break;
	}
}
