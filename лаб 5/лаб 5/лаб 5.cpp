#include "pch.h"
#include <iostream>
using namespace std;



int main()
{
	setlocale(LC_ALL, "RUS");
	int a;
	cout << "Ведите номер задания : ";
	cin >> a;
	switch (a)
	{
	case 1:
	{
		int a;
		cout << "Ведите a: ";
		cin >> a;
		a = a / 1024;
		cout << "  " << a << endl;

		system("pause");
		return 0;
	}
	break;

	case 2:
	{
		int A, B;
		cout << "Ведите a,c : ";
		cin >> A >> B;
		if (A > B && B >= 0 && A >= 0)
		{
			A = A / B;
			cout << " На отрезке длины A размещено максимально возможное количество отрезков длины B : " << A << endl;
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
		int A, B;
		cout << "Ведите a,c : ";
		cin >> A >> B;
		if (A > B && B >= 0 && A >= 0)
		{
			A = A % B;
			cout << " длинa незанятой части отрезка A= : " << A << endl;
		}
		else {
			cout << "не соответствие условию " << endl;
		}
		system("pause");
		return 0;
	}
	break;

	case 4:
	{
		int a;
		cout << "Ведите a : ";
		cin >> a;
		if (9 < a && a < 100)
		{
			cout << "  A= : " << a / 10 + (a % 10) * 10 << endl;
		}
		else {
			cout << "не соответствие условию " << endl;
		}
		system("pause");
		return 0;
	}
	break;

	case 5:
	{
		int a;
		cout << "Ведите a : ";
		cin >> a;
		if (99 < a && a < 1000)
		{
			cout << "  A=  " << (a % 100) * 10 + (a / 100) << endl;
		}
		else {
			cout << "не соответствие условию " << endl;
		}
		system("pause");
		return 0;
	}
	break;


	default:
		break;
	}
}
