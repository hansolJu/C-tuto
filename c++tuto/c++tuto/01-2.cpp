#include<iostream>

void swap(int * num1, int * num2) {
	int temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}
void swap(char * num1, char * num2) {
	int temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}
void swap(double * num1, double * num2) {
	int temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}
int main() {
	int num1 = 20, num2 = 30;
	swap(&num1, &num2);
	std::cout << num1 << num2 << std::endl;

	char ch1 = 'A', ch2 = 'Z';
	swap(&ch1, &ch2);
	std::cout << ch1 << ' ' << ch2 << std::endl;

	double db11 = 1.111, db12 = 5.555;
	swap(&db11, &db12);
	std::cout << db11 << ' ' << db12 << std::endl;
	return 0;
}