// part5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

const double Pi = 3.1415926535;

void printSymbol(char s, int n) {
	for (int i = 0; i < n; i++) {
		cout << s;
	}
	cout << endl;
}

int factorial(int n) {
	if (n == 0) {
		return 1;
	}
	return n * factorial(n - 1);
}

int getMax(int x, int y) {
	if (x >= y) {
		return x;
	} else {
		return y;
	}
}

double cylinderVolume(int radius, int height) {
	return Pi * pow(radius, 2) * height;
}

void cylinderSquareAndVolume(int radius, int height) {
	double S = 2 * Pi * radius * (height + radius);
	double V = cylinderVolume(radius, height);
}

int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL, "russian");
	
	//25
	printSymbol('*', 10);

	//26
	cylinderSquareAndVolume(3, 9);

	//27
	cout.width(5);
	cout << "Число";
	cout.width(10);
	cout << "Факториал" << endl;
	for (int i = 0; i < 10; i++) {
		cout.width(5);
		cout << i;
		cout.width(10);
		cout << factorial(i) << endl;
	}

	//28
	int max = getMax(10, 20);

	//29
	cout << "Объем цилиндра = " << cylinderVolume(5, 10) << endl;
	return 0;
}

