#include<iostream>
#include "LinearEquation.h"
using namespace std;

LinearEquation::LinearEquation(double A, double B) :a(A), b(B)
{
	cout << "Линейное уравнение: " << a << "x + " << "(" << b << ")" << " = 0" << endl;
}

void LinearEquation::getRoot()
{
	double x;
	x = -b / a;
	cout << "Корень линейного уравнения: x = " << x << endl << endl;
}