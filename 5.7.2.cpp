// ConsoleApplication11.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>
#include "math.h"
using namespace std;

int main()
{
	int m, max, n, q,p;
	int *arr, *arr1, *arr2;
	
	cout << "enter the size\n";
	cin >> n;
	arr = new int[n];
	for (int i = 0; i < n; i++) {
		cout << "enter the number";
		cin >> arr[i];
	};
	
	cout << "enter the size of the second array\n";
	cin >> m;
	arr1 = new int[m];
	for (int i = 0; i < m; i++) {
		cout << "enter the number";
		cin >> arr1[i];
	};
	int z=0;
	arr2 = new int[z];
	int i = 0, j = 0;
	while (i <= n) {
		q = arr[i];
		p = 0;
		while (q != 0) {
			if (q % 10 == 0)
				p++;
			q = q / 10;
		}
		if (p != 0) {
			z++;
			arr2[j] = arr[i];
			j++;
			for (int k = i; k<n - 1; k++)
				arr[k] = arr[k + 1];
			n--;
		}
		else {
			i++;
		}
	}
	i = 0;
	while (i <= m) {
		
		p = 0;
		for (int o = 2; o < arr[i] / 2; o++) {
			if (arr[i] % 0 == 0)
				p++;
		}
		if (p > 0) {
			z++;
			arr2[j] = arr1[i];
			j++;
			for (int k = i; k<m - 1; k++)
				arr1[k] = arr1[k + 1];
			m--;
		}
		else {
			i++;
		}
	}
	int max1, max2, max3, max4, max5;
	max1 = max2 = max3 = max4 = max5 = 0;
	for (int o = 0; o < z; o++) {
		if (arr2[o] % 2 == 1) {
			if (arr2[o] >= max1) {
				max5 = max4; max4 = max3; max3 = max2; max2 = max1; max1 = arr2[o];
			}
			else {
				if (arr2[0] >= max2) {
					max5 = max4; max4 = max3; max3 = max2; max2 = arr2[o];
				}
				else {
					if (arr2[o] >= max3) {
						max5 = max4; max4 = max3; max3 = arr2[o];
					}
					else {
						if (arr2[o] >= max4) {
							max5 = max4; max4 = arr[o];
						}
						else {
							if (arr2[o] > max5) {
								max5 = arr2[o];
							}
						}
					}
				}
			}
		}
	}
	int temp;
	for (int i = 0; i < z - 1; i++) {
		for (int j = 0; j < z - i - 1; j++) {
			if (arr2[j] > arr2[j + 1]) {
				temp = arr2[j];
				arr2[j] = arr2[j + 1];
				arr2[j + 1] = temp;
			}
		}
	}	
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	for (int i = 0; i < m - 1; i++) {
		for (int j = 0; j < m - i - 1; j++) {
			if (arr1[j] > arr1[j + 1]) {
				
				temp = arr1[j];
				arr1[j] = arr1[j + 1];
				arr1[j + 1] = temp;
			}
		}
	}
	cin >> n;
	return 0;
}