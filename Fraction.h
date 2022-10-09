#pragma once 
#include <iostream> 
#include <string> 
#include <math.h>
using namespace std;

class Fraction
{
private:
	int NOD(int a, int b)//нахождение наибольшего общего делителя
	{
		while (a != 0 and b != 0)
		{
			if (a > b)
			{
				a = a % b;
			}
			else
			{
				b = b % a;
			}
		}
		return (a + b);
	}
	Fraction toCommonDenominator(int coef)//приведение к общему знаменателю
	{
		return Fraction(this->num * coef, this->den * coef);
	}
public:
	int num;
	int den;

	Fraction(int n, int d) 
	{
		this->num = n;
		this->den = d;
	}
	
	Fraction() 
	{
		int num1;
		int den1;
		cout << "Enter numerator ";
		cin >> num1;
		cout << "Enter denominator ";
		cin >> den1;
		this->num = num1;
		this->den = den1;
	}

	void display() 
	{
		if (num == den) {
			cout << 1;
		}
		else if (num == 0) {
			cout << 0;
		}
		else if (num < 0 || den < 0) {
			cout << "-" << abs(num) << " / " << abs(den);
		}
		else {
			cout << num << " / " << den;
		}
	}

	Fraction operator + (Fraction fr)
	{
		Fraction upd = this->toCommonDenominator(fr.den);
		Fraction otherUpd = fr.toCommonDenominator(this->den);
		return Fraction(upd.num + otherUpd.num, upd.den);
	}
	
	Fraction operator - (Fraction fr)
	{
		Fraction upd = this->toCommonDenominator(fr.den);
		Fraction otherUpd = fr.toCommonDenominator(this->den);
		return Fraction(upd.num - otherUpd.num, upd.den);
	}

	Fraction operator * (Fraction fr)
	{
		return Fraction(this->num * fr.num, this->den * fr.den);
	}

	Fraction operator / (Fraction fr)
	{
		return Fraction(this->num * fr.den, this->den * fr.num);
	}

	friend ostream& operator <<(ostream& out, const Fraction& f)
	{
		return out << f.num << " " << f.den;
	}
	void reduce() //сокращение дроби
	{
		int nod = NOD(this->num, this->den);
		this->num = this->num / nod;
		this->den = this->den / nod;
	}
};
/*Реализуйте класс Дробь. Необходимо хранить числитель
и знаменатель в качестве переменных-членов. Реализуйте
функции-члены для ввода данных в переменные-члены,
для выполнения арифметических операций (сложение,
вычитание, умножение, деление, и т.д.).*/