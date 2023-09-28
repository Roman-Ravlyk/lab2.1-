// Lab_02.1.cpp
// < Равлик, Роман>
// Лабораторна робота № 2.1
// Лінійні програми.
// Варіант 23

#include <iostream>
#include <cmath>
using namespace std;;
int main()
{
	double a;
	double z1;
	double z2;
	cout << "a = "; cin >> a;
	z1 = (sin(a * 2) + sin(a * 5) - sin(a * 3)) / (cos(a) + 1 - 2 * sin(a * 2) * sin(a * 2));
	z2 = 2 * sin(a);
	cout << endl;
	cout << "z1 = " << z1 << endl;
	cout << "z2 = " << z2 << endl;
	cin.get();
	return 0;
}