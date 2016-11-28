// ConsoleApplication16.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


#include <iostream>
using namespace std;

int main()
{
	int *arr;
	int n, p, q, c, a,count,b;
	cout << "enter the size\n";
	cin >> n;
	arr = new int[n];
	for (int i = 0; i < n; i++) {
		cout << "enter the number ";
		cin >> arr[i];
	}
	p = q = -1;
	for (int i = 0; i < n; i++) {
		c = 0;
		for (int j = 2; j < arr[i] / 2; j++) {
			if (arr[i] % j == 0) {
				c++;
			}
		}
		if (p != -1 && c == 0) {
			p = i;
		}
		a = arr[i];
		b = 0;
		while (a > 0) {
			a = a / 10;
			b = b + 1;
		};
		a = arr[i];
		count = 0;
		for (int i = b; i > 1; i -= 2) {
			if (a % 10 == (a / int(pow(10, i - 1)))) {
				count++;
			}
			a = a % int((pow(10, i - 1)));
			a = a / 10;

		}
		if (count == b / 2 && i>q) {
			q = i;
		}
	}
	int temp;
	for (int i = p; i <= q; i++) {
		for (int j = p; j < q - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	cin >> n;
	return 0;
}


