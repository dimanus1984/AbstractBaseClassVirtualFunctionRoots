#pragma once
#include "BaseClassEquation.h"
class QuadraticEquation : public BaseClassEquation
{
	// Квадратичное уравнение: Ax^2 + Bx + c = 0
private:
	double q_a;
	double q_b;
	double q_c;
public:
	QuadraticEquation(double q_A, double q_B, double q_C);
	~QuadraticEquation() {}
	void getRoot();
};