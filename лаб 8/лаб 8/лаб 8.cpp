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
		int a, b;
		cout << "Ведите A , B :";
		cin >> a >> b;
		if (a == b)
		{
			a = 0;
			b = 0;
		}
		else
		{
			if (a > b)
			{
				b = a;
			}
			else
			{
				a = b;
			}
		}
		cout << " A равны :" << a << endl;
		cout << " B равны :" << b << endl;
	}
	case 2:
	{
		int a, b, c, s;
		cout << " Ведите a, b, c : ";
		cin >> a >> b >> c;
		if (a > b)
		{
			if (b > c)
				s = a + b;
			else
				s = a + c;
		}
		else
		{
			if (c > a)
				s = c + b;
			else
				s = b + a;
		}
		cout << "Сумма двух наибольших чисел: " << s << endl;
	}

	case 3:
	{
		int a, b, c, ab, ac;
		cout << " Ведите a, b, c : ";
		cin >> a >> b >> c;
		ab = abs(a - b);
		ac = abs(a - c);
		if (ab < ac)
			cout << "Точка b лежит ближе и ратояние от а =" << ab << endl;
		if (ab > ac)
			cout << "Точка c лежит ближе и ратояние от а =" << ac << endl;
		if (ab == ac)
			cout << "Точки b и c равноудалены от a и ратояние от а =" << ac << endl;
	}

	case 4:
	{
		int y, x;
		cout << "Ведите X , Y :";
		cin >> x >> y;
		if (x > 0)
		{
			if (y > 0)
				cout << "Первая четверть";
			else
				cout << "Вторая четверть";
		}
		else
		{
			if (y < 0)
				cout << "Третья четверть";
			else
				cout << "Четвёртая четверть";
		}
	}
	case 5:
	{
		int a;
		cout << "Ведите a : ";
		cin >> a;
		if (a == 0)
			cout << "Нулевое число";
		if (a > 0)
		{
			if ((a % 2) == 0)
				cout << "Положительное четное число";
			else
				cout << "Положительное нечетное число";
		}
		else
		{
			if ((a % 2) == 0)
				cout << "отрицательное четное число";
			else
				cout << "отрицательное нечетное число";
		}
	}

	case 6:
	{
		int a;
		cout << "Ведите a : ";
		cin >> a;

		if (a < 0 && a < -99)
			cout << "отрицательное трёхзначное число";
		if (a > 0 && a > 99)
			cout << "положительное трёхзначное число";
		if (a < 0 && a < -9 && a > -100)
			cout << "отрицательное двухзначное число";
		if (a > 0 && a > 9 && a < 100)
			cout << "положительное двухзначное число";
		if (a < 0 && a > -10)
			cout << "отрицательное однозначное число";
		if (a > 0 && a < 10)
			cout << "пожительное однозначное число";

	}

	default:
		break;
	}
}