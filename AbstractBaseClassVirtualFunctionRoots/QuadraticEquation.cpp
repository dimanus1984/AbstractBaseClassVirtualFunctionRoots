#include<iostream>
#include "QuadraticEquation.h"
using namespace std;

QuadraticEquation::QuadraticEquation(double q_A, double q_B, double q_C): q_a(q_A), q_b(q_B), q_c(q_C)
{
	cout << "Квадратичное уравнение: " << q_a << "x^2 + (" << q_b << "x) + (" << q_c << ") = 0" << endl;
}

void QuadraticEquation::getRoot()
{
    double x1, x2;
    // определяем дискриминант
    double d = q_b * q_b - 4 * q_a * q_c;
    if (d < 0)  // Если дискриминант отрицательное число (d < 0), то корней нет.
    {
        cout << "Корней нет!" << endl;
        return;
    }
    if (d == 0) // Если же дискриминант равен нулю, то х = (-b)/2a.
    {
        x1 = x2 = -q_b / (2 * q_a);
    }
    else if (d > 0) // Когда дискриминант положительное число (d > 0), тогда х1 = (-b + √d)/2a, и х 2 = (-b - √d)/2a.
    {
        x1 = (-q_b + sqrt(q_b * q_b - 4 * q_a * q_c)) / (2 * q_a);
        x2 = (-q_b - sqrt(q_b * q_b - 4 * q_a * q_c)) / (2 * q_a);
    }
    cout << "Корни уравнения: x1 = " << x1 << ", x2 = " << x2 << endl;
}