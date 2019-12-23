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
		cout << "Ведите a : ";
		cin >> a;

		cout << "  A= : " << a % 60 << endl;
	}
	break;
	case 2:
	{
		int k;
		cout << "Ведите k : ";
		cin >> k;
		if (k > 0 && k < 366)
		{
			cout << "  день недели  : " << k % 7 << endl;
		}
		else
		{
			cout << "не соответствие условию " << endl;
		}
	}
	break;
	case 3:
	{
		int k, N;
		cout << "Ведите k,N : ";
		cin >> k >> N;
		if (k > 0 && k < 366 && N > 0 && N < 8)
		{
			cout << "  день недели  : " << (k + N - 2) % 7 + 1 << endl;
		}
		else
		{
			cout << "не соответствие условию " << endl;
		}
	}
	break;
	case 4:
	{
		int a, b, c, N;
		cout << "Ведите a,b,c : ";
		cin >> a >> b >> c;
		N = (a / c)*(b / c);
		cout << " количество квадратов, размещенных на прямоугольнике, : " << N << endl;
		cout << " площадь незанятой части прямоугольника  : " << (a * b) - (N * c * c) << endl;
	}
	break;
	case 5:
	{
		int a;
		cout << " Ведите год  = ";
		cin >> a;
		if (a > 0)
			cout << "Столетие = " << (a - 1) / 100 + 1 << endl;
		return 0;
	}
	break;

	default:
		cout << "нет такого задания " << endl;
		break;
	}

}

