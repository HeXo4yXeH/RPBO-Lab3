﻿#include <iostream>

import Math;
using namespace std;
int main()
{
	double re, im;
	cout << "Real and Imag num:" << endl;
	cin >> re >> im;
	Complex c(re, im);

	double chisl, znam;
	cout << "Numerator and Denumerator num:" << endl;
	cin >> chisl >> znam;
	Rational r(chisl, znam);
	double d;
	cout << "double:" << endl;
	cin >> d;

	Rational answ = f(r);
	double a = answ.Nominator(), b = answ.Denominator();

	cout << "f(" << c << ") = " << f(c) << endl;
	cout << "f(" << r << ") = " << f(r) << " = " << a / b << endl;
	cout << "f(" << d << ") = " << f(d) << endl;

	return 0;
}