// ConsoleApplication17.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int main()
{
	double n,a,b,p;
	b = 1;
	a = 0;
	cout << "Enter your number\n";
	cin >> n;
	for (int i = 1; i <= n; i++) {
		a = a + i*i;
	}
	for (int i = 2; i <= n; i++) {
		b = b*i;
	}
	p = a / b;
	cout << p;
	cin >> n;
    return 0;
}

