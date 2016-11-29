// ConsoleApplication20.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int n, m, min,b,max,maxi;
	int **arr;
	min = 2147483647;
	cout << "Enter n\n";
	cin >> n;
	cout << "enter m\n";
	cin >> m;
	arr = new int *[n];
	for (int i = 0; i < n; i++) {
		arr[i] = new int[m];
		for (int j = 0; j < m; j++) {
			cout << "enter the number\n";
			cin >> arr[i][j];
			if (arr[i][j] < min)
				min = arr[i][j];
		}
	}
	int s;
	s = abs(min);
	b = 0;
	while (min > 0) {
		b += min % 10;
		min = min / 10;
	}
	for (int j = 0; j < m; j++) {
		max = min;
		maxi = -1;
		for (int i = 0; i < n; i++) {
			if (arr[i][j] > max) {
				max = arr[i][j];
				maxi = i;
			}
			arr[maxi][j] = b;
		}
	}
	int *arrA;
	arrA = new int[n];
	int count;
	for (int i = 0; i < n; i++) {
		count = 0;
		for (int j = 0; j < m; j++) {
			if (arr[i][j] % 2 == 1)
				count++;
		}
		arrA[i] = count;
	}
    return 0;
}

