// ConsoleApplication15.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "math.h"
using namespace std;
int main()
{
	int n, b,  a, number, aa,count;
	cout << "Enter how many numbers you are going to enter\n";
	cin >> number;

	aa = 0;
	int *arr = new int[aa];
	for (int j = 1; j <= number; j++) {
		cout << "Enter your number\n";
		cin >> n;
		 a = n;
		b = 0;

		while (a > 0) {
			a = a / 10;
			b = b + 1;
		};
		a = n;
		count = 0;
		for (int i = b; i > 1; i -= 2) {
			if (a % 10 == (a / int(pow(10, i - 1)))) {
				count++;
			}
			a = a % int((pow(10, i - 1)));
			a = a / 10;

		}
		if (count == b / 2) {
			aa++;
			arr[aa - 1] = n;

		}
		
		};
	
	if (aa==0) {
		cout << "There are no numbers";
	}
	else {
		cout << "Your numbers are: ";
		for (int i = 0; i < aa; i++) {
			cout << arr[i] << " ";
		}
	}
	cin >> a;//не знаю, как сделать так, чтобы консоль не исчезала
	return 0;

}

