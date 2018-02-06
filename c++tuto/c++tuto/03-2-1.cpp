#include"03-2-1.h"

double Calculator::Add(double a, double b) {
	add++;
	return a + b;
}
double Calculator::Min(double a, double b) {
	min++;
	return a - b;
}
double Calculator::Div(double a, double b) {
	div++;
	return a / b;
}
double Calculator::Mul(double a, double b) {
	mul++;
	return a * b;
}

void Calculator::ShowOpCount() {
	cout << "µ¡¼À: " << add << " »¬¼À: " << min << " °ö¼À: " << mul << "	³ª´°¼À: " << div << endl;

}

void Calculator::Init() {
	add = 0;
	min = 0;
	div = 0;
	mul = 0;
}