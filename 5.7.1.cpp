// ConsoleApplication10.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "math.h"
using namespace std;

int main()
{
	int m,max,n,s,p;
	int *arr,*arr1,*arr2;
	s = 0;
	p = 1;
	cout << "enter the size\n";
	cin >> n;
	arr = new int[n];
	for (int i = 0; i < n; i++) {
		cout << "enter the number";
		cin >> arr[i];
	};
	for (int i = 0; i < n; i++) {
		if (arr[i] > 0) {
			s = s + arr[i];
}
	};
	if ((n/2) % 2 == 0) {
		for (int i = (n / 2)+1; i < n; i+=2) {
			p = p*arr[i];
		}
	}
	else {
		for (int i = n / 2; i < n; i += 2) {
			p = p*arr[i];
		}
	};
	cout << "enter the size of the second array\n";
	cin >> m;
	arr1 = new int[m];
	for (int i = 0; i < m; i++) {
		cout << "enter the number";
		cin >> arr1[i];
	};
	arr2 = new int[n + m];
	int i = 0,j=0;
	while (i <= n) {
		if (arr[i] < 0) {
			arr2[j] = arr[i];
			j++;
			for (int k = i; k<n-1; k++)
				arr[k] = arr[k + 1];
			n--;
		}
		else {
			i++;
		}
	}
	i = 0;
	while (i <= m) {
		if (arr1[i] < 0) {
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
	i = 0;
	while (i <= n) {
		if (arr[i] == 0) {
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
		if (arr1[i] == 0) {
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
	i = 0; 
	while (i <= n) {
		if (arr[i] > 0) {
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
		if (arr1[i] > 0) {
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
	max = arr2[0];
	int maxi=0;
	for (int k = 1; k < n + m; k++) {
		if (arr2[k] > max) {
			max = arr2[k];
			maxi = k;
		}
	}
	for (int l = maxi; l < n + m - 1; l++)
		arr2[l] = arr2[l + 1];
	m--;

	cin >> n;
    return 0;
}

