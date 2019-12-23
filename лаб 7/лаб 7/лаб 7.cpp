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
		cout << "Ведите A и B: ";
		cin >> a >> b;
		if (a > 2 && b <= 3)
			cout << "Высказывания истено ";
		else
			cout << "Высказывания ложно ";
	}
	break;

	case 2:
	{

		int a, b, c;
		cout << "Ведите A , B и C : ";
		cin >> a >> b >> c;
		if (a < b && b < c)
			cout << "Высказывания истено ";
		else
			cout << "Высказывания ложно ";

	}

	break;

	case 3:
	{
		int a;
		cout << "Ведите A : ";
		cin >> a;
		if (a > 9 && a < 100 && (a % 2) == 0)
			cout << "Высказывания истено ";
		else
			cout << "Высказывания ложно ";
	}
	break;

	case 4:
	{
		int a;
		cout << "Ведите A : ";
		cin >> a;
		if (a > 99 && a < 1000 && (a / 100) < ((a / 10) % 10) && ((a / 10) % 10) < (a % 10))
			cout << "Высказывания истено ";
		else
			cout << "Высказывания ложно ";
	}
	break;

	case 5:
	{
		int a;
		cout << "Ведите A : ";
		cin >> a;
		if (a > 999 && a < 10000 && (a / 1000) == (a % 10) && ((a / 100) % 10) == ((a % 100) / 10))
			cout << "Высказывания истено ";
		else
			cout << "Высказывания ложно ";
	}
	break;

	case 6:
	{
		int a, b, c;
		cout << "Ведите A , B и C : ";
		cin >> a >> b >> c;

		if (a > 0 && b > 0 && c > 0 && a == (sqrt(pow(b, 2) + pow(c, 2))))
			cout << "Высказывания истено ";

		if (a > 0 && b > 0 && c > 0 && b == (sqrt(pow(a, 2) + pow(c, 2))))
			cout << "Высказывания истено ";

		if (a > 0 && b > 0 && c > 0 && c == (sqrt(pow(b, 2) + pow(a, 2))))
			cout << "Высказывания истено ";

		else
			cout << "Высказывания ложно ";
	}
	break;

	case 7:
	{
		int a, b, c;
		cout << "Ведите A , B и C : ";
		cin >> a >> b >> c;
		if (a > 0 && b > 0 && c > 0 && (a + b) > c && (a + c) > b && (c + b) > a)
			cout << "Высказывания истено ";
		else
			cout << "Высказывания ложно ";
	}
	break;

	default:
		break;
	}


}

