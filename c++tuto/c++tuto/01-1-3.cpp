#include<iostream>
int main() {
	int inputNumber;

	std::cout << "���ڸ� �Է��ϼ���.: ";
	std::cin >> inputNumber;

	for (int i = 1; i < 10; i++) {
		std::cout << inputNumber << "X" << i << "=" << i * inputNumber << std::endl;
	}
}