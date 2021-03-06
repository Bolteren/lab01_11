#include "pch.h"
#include <iostream>
#include <cmath>


using namespace std;

double funF(double a, double b, double x);
double funZ(double a, double b, double c, double x);
double modl(double x);

int main()
{
	setlocale(LC_ALL, "Russian");
	double x = 0.0, a = 0.0, b = 0.0, c = 0.0;
	cout << "Введите значение а = ";
	cin >> a;
	cout << "Введите значение b = ";
	cin >> b;
	cout << "Введите значение с = ";
	cin >> c;
	cout << "Введите значение х = ";
	cin >> x;
	if ((x - pow(modl(x - b), 0.5)) != 0)
	{
		cout << endl << "Значение функции f = " << funF(a, b, x) << endl << endl;
		cout << "Значение функции z = " << funZ(a, b, c, x) << endl << endl;
	}
	else
	{ //данное условие выполняется только для комплексных чисел
		system("color 40");
		cout << endl << "В вырожении под знаком дроди должно быть отличным от нуля." << endl;
	}
	return 0;
}

double modl(double x)
{
	if (x >= 0)
	{
		return x;
	}
	else
	{
		return x * (-1);
	}
}

double funF(double a, double b, double x)
{
	double f = 0.0, temp = 0.0;
	f = pow( sin(x / b), 2);
	temp = log10(a + pow(x, 2));
	f = f + temp;
	return f;
}

double funZ(double a, double b, double c, double x)
{
	double z = 0.0, temp = 0.0;
	temp = pow(modl(x - b), 0.5);
	temp = x - temp;
	z = pow((x + a), 0.5);
	z = x + z;
	z = z / temp;
	temp = exp(-c * x);
	z = z * temp;
	return z;
}