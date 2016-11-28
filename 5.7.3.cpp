// ConsoleApplication12.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int *arr;
	int n, p, q,count,l,pp;
	cout << "Enter the size of the array\n";
	cin >> n;
	arr = new int[n];
	for (int i = 0; i < n; i++) {
		cout << "enter the number";
		cin >> arr[i];
	};
	p = q = count = l=pp=0;
	for (int i = 0; i < n; i++) {
		if (arr[i] % 2 == 1) {
			if (l == 0) {
				pp = i;
				l++;
			}
			else {
				if (arr[i] < arr[i - 1]) {
					l++;
			}
				else {
					l = 0;
				}

			}
			
		}
		else {
			if (l != 0) {
				if (l >= count) {
					p = pp;
					q = i - 1;
					count = l;
				}
				l = 0;
			}
		}
	}
	while (count > 0) {
		for (int k = p; k < n - 1; k++)
			arr[k] = arr[k + 1];
		n--;
		count--;
	}
	cin >> n;
    return 0;
}

