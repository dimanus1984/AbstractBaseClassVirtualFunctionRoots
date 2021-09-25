#pragma once
#include "BaseClassEquation.h"
class LinearEquation : public BaseClassEquation
{
	// Линейное уравнение: Ax + B = 0
private:
	double a;
	double b;
public:
	LinearEquation(double A, double B);
	~LinearEquation() {}
	void getRoot();
};