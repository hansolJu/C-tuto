#include<iostream>
int main() {
	char name[100];
	char number[100];

	std::cout << "�̸�: ";
	std::cin >> name;
	std::cout << "��ȭ��ȣ: ";
	std::cin >> number;
	
	std::cout << "�̸�: " << name<< std::endl;
	std::cout << "��ȭ��ȣ: " << number << std::endl;
	
	return 0;
}