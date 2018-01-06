#include<iostream>
//int main() {
//	int input = 0;
//	while (1) {
//		std::cout << "판매금액을 만원 단위로 입력(-1 to end): ";
//		std::cin >> input;
//		if (input == -1) {
//			std::cout << "프로그램을 종료합니다." << std::endl;
//			break;
//		}
//		else {
//			std::cout << "이번달 급여: " << 50 + (input*0.12) << "만원" << std::endl;
//		}
//	}
//}
int CalSalary(int sales) {
	return (int)(50 + sales * 0.12);
}
int main() {
	int sales;
	while (1) {
		std::cout << "판매금액을 만원 단위로 입력(-1 to end): ";
		std::cin >> sales;
		if (sales == -1) {
			std::cout << "프로그램을 종료합니다." << std::endl;
			break;
		}
		else {
			std::cout << "이번달 급여: " << CalSalary(sales) << "만원" << std::endl;
		}
	}
	return 0;
}