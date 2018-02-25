#include<iostream>
using namespace std;

class SoSimple
{
public:
	static int simObjCnt;
public://변수와 함수 구분 목적으로 사용
	SoSimple() {
		simObjCnt++;
	}
};

int SoSimple::simObjCnt = 0;

int main() {
	cout << SoSimple::simObjCnt << "번째 SoSimple 객체" << endl;//public으로 선언된 static맴버는 어디서든 접근이 가능하다.
	SoSimple sim1;
	SoSimple sim2;

	cout << SoSimple::simObjCnt << "번째 SoSimple 객체" << endl;
	cout << sim1.simObjCnt << "번째 SoSimple 객체" << endl;
	cout << sim2.simObjCnt << "번째 SoSimple 객체" << endl;

	return 0;
}