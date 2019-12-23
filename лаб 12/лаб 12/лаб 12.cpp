#include "pch.h"
#include <iostream>
using namespace std;

double Fact2(long n);

int Quarter(int& x, int& y);

double RingS(double& r1, double& r2);

void Sign(int& X);

double PowerA3(double& A, double& B);

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

		double b, a1, a2, a3, a4, a5;
		cout << "Введите a1, a2, a3, a4, a5:";
		cin >> a1 >> a2 >> a3 >> a4 >> a5;

		cout << PowerA3(a1, b) << " " << PowerA3(a2, b) << " " << PowerA3(a3, b) << " " << PowerA3(a4, b) << " " << PowerA3(a5, b) << " ";


	}
	case 2:
	{
		int a, b;
		cout << "Введите a и b:";
		cin >> a >> b;

		Sign(a);
		Sign(b);
		cout << a + b;
	}
	case 3:
	{
		double r1, r2;
		cout << "Введите r1 и r2:";
		cin >> r1 >> r2;
		cout << RingS(r1, r2);
	}
	case 4:
	{
		int x, y;
		cout << "Введите x и y:";
		cin >> x >> y;
		cout << Quarter(x, y);

	}
	case 5:
	{
		double n;
		cout << "Введите n:";
		cin >> n;
		cout << Fact2(n);
	}

	}
}

double PowerA3(double& A, double& B)
{
	return B = A * A * A;
}

void Sign(int& X)
{
	if (X < 0)
		X = -1;
	if (X == 0)
		X = 0;
	if (X > 0)
		X = 1;

}

double RingS(double& r1, double& r2)
{
	double s = 0;

	if (r1 < r2)
		return s = (3, 14 * pow(r2, 2)) - (3, 14 * pow(r1, 2));
	else
		cout << "несответствие условию ";

}

int Quarter(int& x, int& y)
{
	int a = 0;

	if (x > 0)
	{
		if (y > 0)
			a = 1;
		if (y < 0)
			a = 2;
	}
	else
	{
		if (y > 0)
			a = 4;
		if (y < 0)
			a = 3;
	}
	return a;
}

double Fact2(long n)
{
	long result = 1;
	for (int i = n % 2 == 0 ? 2 : 1; i <= n; i += 2)
	{
		result *= i;
	}
	return result;
}