#include<iostream>
//int main() {
//	int input = 0;
//	while (1) {
//		std::cout << "�Ǹűݾ��� ���� ������ �Է�(-1 to end): ";
//		std::cin >> input;
//		if (input == -1) {
//			std::cout << "���α׷��� �����մϴ�." << std::endl;
//			break;
//		}
//		else {
//			std::cout << "�̹��� �޿�: " << 50 + (input*0.12) << "����" << std::endl;
//		}
//	}
//}
int CalSalary(int sales) {
	return (int)(50 + sales * 0.12);
}
int main() {
	int sales;
	while (1) {
		std::cout << "�Ǹűݾ��� ���� ������ �Է�(-1 to end): ";
		std::cin >> sales;
		if (sales == -1) {
			std::cout << "���α׷��� �����մϴ�." << std::endl;
			break;
		}
		else {
			std::cout << "�̹��� �޿�: " << CalSalary(sales) << "����" << std::endl;
		}
	}
	return 0;
}