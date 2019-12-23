#include "pch.h"
#include <iostream>
using namespace std;



int main()
{
	int n, i, m, b, c, j, max, z, k, a, sum, d;
	int *v, *vb, *vbn;

	setlocale(LC_ALL, "rus");
	cout << "Ведите номер задания : ";
	cin >> a;
	switch (a)
	{
	case 1:
	{
		int m, i, b, n;
		cout << "Введите размер массива N и заполните его: ";
		cin >> n;
		m = 0;
		v = new int[n];
		vb = new int[n];
		vbn = new int[n];
		for (i = 0; i < n; i++)
		{
			cin >> v[i];
		}
		b = 0;
		vb[b] = 1;
		vbn[b] = v[b];
		for (i = 1; i < n; i++)
		{
			if (v[i - 1] == v[i])
			{
				vb[b] ++;
			}
			else
			{
				b++;
				vb[b] = 1;
				vbn[b] = v[i];
			}
		}
		cout << "Результат:" << endl;
		for (i = 0; i <= b; i++)
		{
			cout << vb[i] << " ";
		}

		for (i = 0; i <= b; i++)
		{
			cout << vbn[i] << " ";
		}
	}
	break;
	case 2:
	{

		cout << "Введите размер массива N и заполните его: ";
		cin >> n;
		v = new int[n];
		vb = new int[n];
		for (i = 0; i < n; i++)
		{
			cin >> v[i];
		}
		cout << "Введите L (L > 0):";
		cin >> max;
		m = n;
		b = 1;
		c = 0;
		for (i = 1; i < n; i++)
		{
			if (v[i - 1] == v[i]) b++;
			else if (b > max)
			{
				vb[c] = 0;
				c++;
				m = m - b + 1;
				b = 1;
			}
			else
			{
				for (j = c; j < b + c; j++) vb[j] = v[i - 1];
				c += b;
				b = 1;
			}
			if (i == n - 1)
			{
				if (b > max)
				{
					vb[c] = 0;
					c++;
					m = m - b + 1;
					b = 1;

				}
				else
				{
					for (j = c; j < b + c; j++) vb[j] = v[i];
					c += b;
					b = 1;
				}
			}
		}
		cout << "Преобразованный массив:" << endl;
		for (i = 0; i < m; i++)
		{
			cout << i + 1 << ": " << vb[i] << "." << endl;
		}

	}
	break;

	case 3:
	{
		cout << "Введите размер массива N и заполните его: ";
		cin >> n;
		v = new int[n];
		vb = new int[n];
		for (i = 0; i < n; i++)
		{
			cin >> v[i];
		}
		cout << "Введите K:";
		cin >> max;
		m = 1;
		b = 0;
		z = (max == 1 ? 1 : 0);
		j = -1;
		for (i = 1; i < n; i++) {
			if (v[i - 1] != v[i]) {
				m++;
				if (m == max) b = i;
				c = i;
			}
			if (m == max) z++;
		}
		for (i = 0; i < b; i++)  vb[++j] = v[i];

		for (i = c; i < n; i++)  vb[++j] = v[i];

		for (i = b + z; i < c; i++)  vb[++j] = v[i];

		for (i = b; i < b + z; i++)  vb[++j] = v[i];

		for (i = 0; i < n; i++) v[i] = vb[i];
		cout << "Результат:" << endl;
		for (i = 0; i < n; i++)
		{
			cout << i + 1 << ": " << v[i] << endl;
		}
	} break;

	case 4:
	{
		cout << "Введите размер массива N: ";
		cin >> n;
		m = 0;
		z = 0;
		sum = 0;
		v = new int[n];
		vb = new int[n];
		cout << "Заполните массив точками(x y): ";
		i = 0;
		for (i = 0; i < n; i++)
		{
			cin >> v[i] >> vb[i];
			if (v[i] < 0 && vb[i] > 0 && sqrt(pow(v[i], 2) + pow(vb[i], 2)) > sum)
			{
				sum = sqrt(pow(v[i], 2) + pow(vb[i], 2));
				b = i;
			}
		}
		if (sum > 0)
			cout << "Точка с координатами (" << v[b] << ", " << vb[b] << ") лежит во 2-й четверти на расстоянии " << sum << " от начала координат." << endl;
		else cout << "(0, 0)" << endl;
	} break;

	case 5:
	{

		cout << "Введите размер массива N: ";
		cin >> n;
		m = 0;
		z = 0;
		sum = 0;
		v = new int[n];
		vb = new int[n];
		cout << "Заполните массив точками(x y): ";
		i = 0;
		for (i = 0; i < n; i++)
		{
			cin >> v[i] >> vb[i];
		}
		for (i = 0; i < n - 2; i++)
			for (j = i + 1; j < n - 1; j++)
				for (k = j + 1; k < n; k++)
				{
					if ((sqrt(pow((v[i] - v[j]), 2) + pow((vb[i] - vb[j]), 2))
						+ sqrt(pow((v[j] - v[k]), 2) + pow((vb[j] - vb[k]), 2))
						+ sqrt(pow((v[k] - v[i]), 2) + pow((vb[k] - vb[i]), 2))) > sum)
					{
						sum = sqrt(pow((v[i] - v[j]), 2) + pow((vb[i] - vb[j]), 2))
							+ sqrt(pow((v[j] - v[k]), 2) + pow((vb[j] - vb[k]), 2))
							+ sqrt(pow((v[k] - v[i]), 2) + pow((vb[k] - vb[i]), 2));
						b = i;
						c = j;
						d = k;

					}
				}
		cout << "Треугольник с вершинами (" << v[b] << ", " << vb[b] << "), (" << v[c] << ", " << vb[c] << "), (" << v[d] << ", " << vb[d] << ") имеет наибольший периметр, равный " << sum << "." << endl;
	}
	break;


	default:
		break;
	}
}