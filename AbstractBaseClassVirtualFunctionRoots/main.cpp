#include<iostream>
#include"BaseClassEquation.h"
#include"LinearEquation.h"
#include"QuadraticEquation.h"
using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");
	BaseClassEquation *linear_equation = new LinearEquation(5, 2);
	linear_equation->getRoot();

	BaseClassEquation* quadratic_equation = new QuadraticEquation(2, -3, -5);
	quadratic_equation->getRoot();
}