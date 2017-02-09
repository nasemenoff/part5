// part5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

const double Pi = 3.1415926535;

struct Cylinder {
	double Volume;
	double Square;
};

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
	int f = 1;
	for (int i = 1; i <= n; i++) {
		f *= i;
	}
	return f;
}

int getMax(int x, int y) {
	int res = 0;
	x >= y ? res = x : res = y;
	return res;
}

double cylinderVolume(int radius, int height) {
	return Pi * pow(radius, 2) * height;
}

Cylinder cylinderSquareAndVolume(int radius, int height) {
	Cylinder res;
	res.Square = 2 * Pi * radius * (height + radius);
	res.Volume = cylinderVolume(radius, height);
	return res;
}

int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL, "russian");
	
	//25
	printSymbol('*', 10);

	//26
	Cylinder cylinder = cylinderSquareAndVolume(3, 9);
	cout << "Объем цилиндра: " << cylinder.Volume << ", площадь цилиндра: " << cylinder.Square << endl;

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

