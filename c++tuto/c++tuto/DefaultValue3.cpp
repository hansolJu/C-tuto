#include<iostream>
int BoxVolume(int length, int width = 1, int height = 1);

int main() {
	std::cout << "[3,3,3]: " << BoxVolume(3, 3, 3) << std::endl;
	std::cout << "[5,5,D]: " << BoxVolume(5, 5) << std::endl;
	std::cout << "[7,D,D]: " << BoxVolume(7) << std::endl;
	//모든 매개변수에 디폴트값이 지정된 것이 아니기 때문에, 인자를 전달하지 않는 형태의 함수호출은 컴파일 에러로 이어진다.
	//std::cout << "[D,D,D]: " << BoxVolume() << std::endl;
	return 0;
}

int BoxVolume(int length, int width, int height) {
	return length + width + height;
}