#include "pch.h"
#include <iostream>
#include <cmath>


using namespace std;


int main()
{
	double mt = 0.0, nt = 0.0, s = 0.0, Tmp = 0.0, MPI = 3.14159265358979323846;
	mt = exp(2) + exp(-2);
	mt = mt / 10;
	mt = mt - 1;
	Tmp = 7.002 * sqrt(0.1);
	mt = mt + Tmp;
	mt = pow(mt, (1 / 5));

	nt = cos(3 * MPI / 5);
	Tmp = cos(MPI / 5);
	nt = nt + Tmp;
	nt = log10(3) * nt;
	s = 5 * pow(mt, 2) + 7 * pow(nt, 2);
	if ((pow(mt, 2) + pow(nt, 2)) > 0.1)
	{
		cout << "(mt^2 + nt^2) > 0.1 ";
		s = atan(s);
	}
	else
	{
		cout << "(mt^2 + nt^2) <= 0.1 ";
		s = asin(s);
	}
	cout << "s = " << s << endl;
	return 0;
}