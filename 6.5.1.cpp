// ConsoleApplication19.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>
using namespace std;

int main()
{
	int n, min, count, s, s1, l, l1;
	int **arr, **arr1, **arrC;
	min = 2147483647;
	count = s1 = s = l = l1 = 0;
	cout << "Enter n\n";
	cin >> n;
	arr = new int *[n];
	for (int i = 0; i < n; i++) {
		arr[i] = new int[n];
		for (int j = 0; j < n; j++) {
			cout << "enter the number\n";
			cin >> arr[i][j];
			if (arr[i][j] < min)
				min = arr[i][j];
			if (arr[i][j] % 2 == 0)
				count++;
			if (l1 == 0) {
				if (arr[i][j] > 0) {
					l1++;
					s1 += arr[i][j];
				}
				else {
					if (j == 0) {
						if (arr[i - 1][n] < arr[i][j]) {
							s1 += arr[i][j];
							l1++;
						}
						else {
							if (l1 > l) {
								l = l1;
								s = s1;
								l1 = s1 = 0;
							}
							else {
								l1 = s1 = 0;
							}
						}
					}
					else {
						if (arr[i][j - 1] < arr[i][j]) {
							s1 += arr[i][j];
							l1++;
						}
						else {
							if (l1 > l) {
								l = l1;
								s = s1;
								l1 = s1 = 0;
							}
							else {
								l1 = s1 = 0;
							}
						}
					}
				}
			}
		}
	}
	arr1 = new int *[n];
	for (int i = 0; i < n; i++) {
		arr1[i] = new int[n];
		for (int j = 0; j < n; j++) {
			cout << "enter the number\n";
			cin >> arr1[i][j];
		}
	}
	int k;
	int **arrA, **arrB;
	arrA = new int*[n];
	//¬ычисл€ем произведение двух матриц, последовательно формиру€ все элементы матрицы
	for (int i = 0; i < n; i++) {
		arrA[i] = new int[n];
		for (int j = 0; j < n; j++)
			//Ёлемент с индексами i, j Ч скал€рное произведение i-й строки матрицы A
			for (arrA[i][j] = k = 0; k < n; k++) //и j-го столбца матрицы A
				arrA[i][j] += arr[i][k]*arr[k][j];
	}
	arrB = new int *[n];
	for (int i = 0; i < n; i++) {
		arrB[i] = new int[n];
		for (int j = 0; j < n; j++) {
			arrB[i][j] = arr1[j][i];
		}
	}
	arrC = new int *[n];
	for (int i = 0; i < n; i++) {
		arrC[i] = new int[n];
		for (int j = 0; j < n; j++) {
			arrC[i][j] = arrA[i][j] + arrB[i][j];
		}
	}
	cin >> n;
	return 0;
}

