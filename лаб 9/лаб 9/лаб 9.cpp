#include "pch.h"
#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "ru");
	int a;
	cout << "Введите номер задания" << endl;
	cin >> a;
	switch (a) {
	case 1: {

		int a, b;
		cout << "Введите дату" << endl;
		cin >> a >> b;
		if (a <= 31 && a > 0 && b > 0 && b <= 12) {
			if (a > 9 && a < 21 || a == 30) {
				switch (a) {
				case 10: { cout << "Десятое "; }break;
				case 11: { cout << "Одинадцатое "; }break;
				case 12: { cout << "Двенадцатое "; }break;
				case 13: { cout << "Тринадцатое "; }break;
				case 14: { cout << "Четырнадцатое "; }break;
				case 15: { cout << "Пятнадцатое "; }break;
				case 16: { cout << "Шестнадцатое "; }break;
				case 17: { cout << "Семнадцатое "; }break;
				case 18: { cout << "Восемнадцатое "; }break;
				case 19: { cout << "Девятнадцатое "; }break;
				case 20: {cout << "Двадцатое " << endl; }break;
				case 30: {cout << "Тридцатое " << endl; }break;
				}
			}
			else {
				switch (a / 10) {
				case 2: { cout << "Двадцать "; }break;
				case 3: { cout << "Тридцать "; }break;
				}
				switch (a % 10) {
				case 1: { cout << "Первое "; }break;
				case 2: { cout << "Второе "; }break;
				case 3: { cout << "Третье "; }break;
				case 4: { cout << "Четвертое "; }break;
				case 5: { cout << "Пятое "; }break;
				case 6: { cout << "Шестое "; }break;
				case 7: { cout << "Седьмое "; }break;
				case 8: { cout << "Восьмое "; }break;
				case 9: { cout << "Девятое "; }break;
				}
			}switch (b) {
			case 1: { cout << "Января" << endl; }break;
			case 2: { cout << "Февраля" << endl; }break;
			case 3: { cout << "Марта" << endl; }break;
			case 4: { cout << "Апреля" << endl; }break;
			case 5: { cout << "Мая" << endl; }break;
			case 6: { cout << "Июня" << endl; }break;
			case 7: { cout << "Июля" << endl; }break;
			case 8: { cout << "Августа" << endl; }break;
			case 9: { cout << "Сентября" << endl; }break;
			case 10: { cout << "Октября" << endl; }break;
			case 11: { cout << "Ноября" << endl; }break;
			case 12: { cout << "Декабря" << endl; }break;
			}
		}
		else {
			cout << "Такой даты нет))))0" << endl;
		}
	}break;
	case 2: 
	{

		char C; int N;
		cout << "Введите команду робота" << endl;
		cin >> N;
		cout << "Введите направление робота" << endl;
		cin >> C;

		switch (N)
		{
		case (-1): {
			cout << "Новое направление робота ";
			switch (C) {
			case 'С': cout << "восток" << endl; break;
			case 'c': cout << "восток" << endl; break;
			case 'З': cout << "север" << endl; break;
			case 'з': cout << "север" << endl; break;
			case 'Ю': cout << "запад" << endl; break;
			case 'ю': cout << "запад" << endl; break;
			case 'В': cout << "юг" << endl; break;
			case 'в': cout << "юг" << endl; break;
			}}break;
		case 0: {
			cout << "Новое направление робота ";
			switch (C) {
			case 'С': cout << "север" << endl; break;
			case 'c': cout << "север" << endl; break;
			case 'З': cout << "запад" << endl; break;
			case 'з': cout << "запад" << endl; break;
			case 'Ю': cout << "юг" << endl; break;
			case 'ю': cout << "юг" << endl; break;
			case 'В': cout << "восток" << endl; break;
			case 'в': cout << "восток" << endl; break;
			}}break;
		case 1: {
			cout << "Новое направление робота ";
			switch (C) {
			case 'С': cout << "запад" << endl; break;
			case 'c': cout << "запад" << endl; break;
			case 'З': cout << "юг" << endl; break;
			case 'з': cout << "юг" << endl; break;
			case 'Ю': cout << "восток" << endl; break;
			case 'ю': cout << "восток" << endl; break;
			case 'В': cout << "север" << endl; break;
			case 'в': cout << "север" << endl; break;
			}}break;
		default: cout << "Данные введены неверно" << endl;

		}break;

	}break;
	case 3: {

		int a;
		cout << "Введите номер учебного задания" << endl;
		cin >> a;
		if (10 <= a && a <= 40) {
			if (a / 10 == 1) {
				switch (a) {
				case 10: cout << "десять учебных заданий"; break;
				case 11: cout << "однадцать учебных заданий"; break;
				case 12: cout << "двенадцать учебных заданий"; break;
				case 13: cout << "Тринадцать учебных заданий"; break;
				case 14: cout << "четырнадцать учебных заданий"; break;
				case 15: cout << "пятнадцать учебных заданий"; break;
				case 16: cout << "шестнадцать учебных заданий"; break;
				case 17: cout << "семнадцать учебных заданий"; break;
				case 18: cout << "восемнадцать учебных заданий"; break;
				case 19: cout << "девятнадцать учебных заданий"; break;
				}break;
			}
			switch (a / 10) {
			case 2: cout << "двадцать "; break;
			case 3: cout << "тридцать "; break;
			case 4: cout << "сорок "; break;
			}

			switch (a % 10) {
			case 1: cout << "одно "; break;
			case 2: cout << "два "; break;
			case 3: cout << "три "; break;
			case 4: cout << "четыре "; break;
			case 5: cout << "пять "; break;
			case 6: cout << "шесть "; break;
			case 7: cout << "семь "; break;
			case 8: cout << "восемь "; break;
			case 9: cout << "девять "; break;

			}
			switch (a % 10) {
			case 0: cout << "учебных заданий"; break;
			case 1: cout << "учебное задание"; break;
			case 2: cout << "учебных задания"; break;
			case 3: cout << "учебных задания"; break;
			case 4: cout << "учебных задания"; break;
			case 5: cout << "учебных заданий"; break;
			case 6: cout << "учебных заданий"; break;
			case 7: cout << "учебных заданий"; break;
			case 8: cout << "учебных заданий"; break;
			case 9: cout << "учебных заданий"; break;

			}
		}
		else { cout << "Число вне указанного диапазона" << endl; }
	}break;
	case 4: {
		int a;
		cout << "Введите число" << endl;
		cin >> a;
		if (a > 99 && a < 1000) {
			switch (a / 100) {
			case 1: cout << "сто "; break;
			case 2: cout << "двести "; break;
			case 3: cout << "триста "; break;
			case 4: cout << "четыреста"; break;
			case 5: cout << "пятьсот "; break;
			case 6: cout << "шестьсот "; break;
			case 7: cout << "семьсот "; break;
			case 8: cout << "восемьсот "; break;
			case 9: cout << "девятьсот "; break;
			}
			switch ((a % 100) / 10) {
			case 2: cout << "двадцать "; break;
			case 3: cout << "тридцать "; break;
			case 4: cout << "сорок "; break;
			case 5: cout << "пятьдесят "; break;
			case 6: cout << "шестьдесят "; break;
			case 7: cout << "семьдесят "; break;
			case 8: cout << "восемьдесят "; break;
			case 9: cout << "девяносто "; break;
			}

			switch (a % 10) {
			case 1: cout << "один"; break;
			case 2: cout << "два"; break;
			case 3: cout << "три"; break;
			case 4: cout << "четыре"; break;
			case 5: cout << "пять"; break;
			case 6: cout << "шесть"; break;
			case 7: cout << "семь"; break;
			case 8: cout << "восемь"; break;
			case 9: cout << "девять"; break;
			}
			switch (a % 100) {
			case 10: cout << "десять"; break;
			case 11: cout << "одинадцать"; break;
			case 12: cout << "двенадцать"; break;
			case 13: cout << "ринадцать"; break;
			case 14: cout << "четырнадцать"; break;
			case 15: cout << "пятнадцать"; break;
			case 16: cout << "шестнадцать"; break;
			case 17: cout << "семьнадцать"; break;
			case 18: cout << "восемьнадцать"; break;
			case 19: cout << "девятнадцать"; break;
			}
		}
		else { cout << "Число вне указанного диапазона" << endl; }
	}break;
	case 5: {

		int n, k, f;
		cout << "Введите год" << endl;
		cin >> n;
		k = (n) % 5;
		switch (k) {
		case 0:cout << "год бел"; break;
		case 1:cout << "год бел"; break;
		case 2:cout << "год черн"; break;
		case 3:cout << "год черн"; break;
		case 4:cout << "год зелен"; break;
		case 5:cout << "год зелен"; break;
		case 6:cout << "год красн"; break;
		case 7:cout << "год красн"; break;
		case 8:cout << "год желт"; break;
		case 9:cout << "год желт"; break;
		}
		f = (n / 60) % 12;
		switch (f) {
		case 0:cout << "ой крысы" << endl; break;
		case 1:cout << "ой коровы" << endl; break;
		case 2:cout << "ого тигра" << endl; break;
		case 3:cout << "ого зайца" << endl; break;
		case 4:cout << "ого дракона" << endl; break;
		case 5:cout << "ой змеи" << endl; break;
		case 6:cout << "ой лошади" << endl; break;
		case 7:cout << "ой овцы" << endl; break;
		case 8:cout << "ой обезьяны" << endl; break;
		case 9:cout << "ой курицы" << endl; break;
		case 10:cout << "ой собаки" << endl; break;
		case 11:cout << "ой свиньи" << endl; break;
		}
	}break;
	default:cout << "Неправильный номер задания" << endl;
	}

	return 0;
}