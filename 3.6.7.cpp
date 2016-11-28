// ConsoleApplication14.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


#include <iostream>
#include "math.h"
using namespace std;
int main()
{
	int n, b, s1, s2, a, number, c, aa;

	cout << "Enter your number\n";
	cin >> n;
	aa = a = n;
	b = 0;
	s1 = s2 = 0;
	while (a > 0) {
		a = a / 10;
		b = b + 1;
	};
	if (b % 2 == 0) {
		for (int i = 0; i < (b / 2); i++) {
			a = n % 10;
			n = n / 10;
			s1 = s1 + a;
		};
		for (int i = b / 2; i <= b; i++) {
			a = n % 10;
			n = n / 10;
			s2 = s2 + a;
		}
	}
	else {
		for (int i = 0; i < (b / 2); i++) {
			a = n % 10;
			n = n / 10;
			s1 = s1 + a;
		};
		n = n / 10;
		for (int i = (b / 2) + 2; i <= b; i++) {

			a = n % 10;
			n = n / 10;
			s2 = s2 + a;
		}
	};
	if (s1 == s2) {
		cout << "True\n";
	}
	else {
		cout << "False\n";
	}




	cin >> a;//не знаю, как сделать так, чтобы консоль не исчезала
	return 0;

}