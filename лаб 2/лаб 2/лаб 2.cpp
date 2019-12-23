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
		double x1, x2, y1, y2;
		cout << "Ведите x1 , x2 , y1 , y2 : ";
		cin >> x1 >> x2 >> y1 >> y2;
		cout << "Ваш ответ = " << sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1)) << endl;
		system("pause");
		return 0;
	}
	break;

	case 2:
	{
		int a, b, c, AC, BC, Cy;
		cout << "Ведите a,b,c : ";
		cin >> a >> b >> c;
		AC = abs(c - a);
		BC = abs(c - b);
		cout << "AC = " << AC << endl;
		cout << "BC = " << BC << endl;
		cout << " Сумма = " << AC + BC << endl;
		system("pause");
		return 0;
	}
	break;

	case 3:
	{
		int a, b, c, AC, BC;
		cout << "Ведите a,c,b : ";
		cin >> a >> c >> b;
		if (c > a && b > c && b > a)
		{
			AC = (c - a);
			BC = (c - b);
			cout << " Сумма = " << AC * BC << endl;
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
		int x1, x2, y1, y2;
		double x, y;
		cout << "Ведите x1 , x2 , y1 , y2: ";
		cin >> x1 >> x2 >> y1 >> y2;
		// (x1,y1) u (X2 ,y1 )
		x = abs(x2 - x1);
		//(x1,y1) u (x1, y2)
		y = abs(x1 - x1);
		cout << " p = " << (x + y) * 2 << endl;
		cout << " s = " << x * y << endl;
		system("pause");
		return 0;
	}

	break;

	case 5:
	{
		int x1, x2, x3, y1, y2, y3;
		double x, y, c, p;
		cout << "Ведите x1, x2, x3, y1, y2 , y3: ";
		cin >> x1 >> x2 >> x3 >> y1 >> y2 >> y3;
		x = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
		y = sqrt(pow((x3 - x2), 2) + pow((y3 - y2), 2));
		c = sqrt(pow((x1 - x3), 2) + pow((y1 - y3), 2));
		p = (y + c + x) / 2;
		cout << " p = " << y + c + x << endl;
		cout << " s = " << sqrt(p*(p - x)*(p - y)*(p - c)) << endl;
		system("pause");
		return 0;
	}
	break;


	default:
		break;
	}
}
