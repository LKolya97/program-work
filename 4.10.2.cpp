// ConsoleApplication9.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
unsigned long long int NC(unsigned long long int N, unsigned int b) {
	unsigned long long int S, P;
	for (S = 0, P = 1; N != 0; S += N%b*P, P *= 10, N /= b);
	return S;
}
int main()
{
	unsigned long long int a,b,c,s1,s2;
	cout << "Enter the first number\n";
	cin >> a;
	cout << "Enter the  second number\n";
	cin >> b;
	c=s1 = s2 = 0;
	for (int i = 0; a > 0; i++) {
		s1 = s1 + (a%10)*pow(7,i);
		a = a / 10;
	};
	for (int i = 0; b > 0; i++) {
		s2 = s2 + (b % 10)*pow(3, i);
		b = b / 10;
	};
	c = pow(5 * s2 - 2 * s1, 2);
	cout<<"The result: " << c << " (10)=" << NC(c, 8) << "(8)" << endl;
	cin >> a;
	return 0;

}

