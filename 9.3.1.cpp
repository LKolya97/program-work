// ConsoleApplication22.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <math.h>
#include <iomanip>
using namespace std;

int main()
{
	struct complex
	{
		double Re;
		double Im;
	};
	complex a, b, c, d,a1,b1,c1,b2,a2;
	cout << "Enter Re a\n";
	cin >> a.Re;
	cout << "enter Im a\n";
	cin >> a.Im;
	cout << "Enter Re b\n";
	cin >> b.Re;
	cout << "enter Im b\n";
	cin >> b.Im;
	cout << "Enter Re c\n";
	cin >> c.Re;
	cout << "enter Im c\n";
	cin >>c.Im;
	a1.Re = a.Re + c.Re;
	a1.Im = a.Im + c.Im;
	a2.Re = a1.Re*a1.Re - a1.Im*a1.Im;
	a2.Im = a1.Im*a1.Re + a1.Re*a1.Im;
	b1.Re = a.Re - b.Re;
	b1.Im = a.Im - b.Im;
	c1.Re = a.Re - c.Re;
	c1.Im = a.Im - c.Im;
	b2.Re = (b1.Re*c1.Re + b1.Im*c1.Im)/(c1.Re*c1.Re+c1.Im*c1.Im);
	b2.Im = (b1.Im*c1.Re - b1.Re*c1.Im) / (c1.Re*c1.Re + c1.Im*c1.Im);
	d.Re = a2.Re*b2.Re - a2.Im*b2.Im;
	d.Im = a2.Im*b2.Re + a2.Re*b2.Im;
	cout << "d= " << d.Re << "+ i*" << d.Im;
	cin >> a.Re;
    return 0;
}

