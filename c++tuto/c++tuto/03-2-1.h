#ifndef __03_2_1_H__
#define __03_2_1_H__

#include<iostream>
using namespace std;

class Calculator
{
public:
	double Add(double a, double b);
	double Min(double a, double b);
	double Div(double a, double b);
	double Mul(double a, double b);
	void ShowOpCount();
	void Init();
private:
	int add;
	int min;
	int mul;
	int div;

};

#endif // !__03_2_1_H__