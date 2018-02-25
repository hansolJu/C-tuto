#include<iostream>
using namespace std;

class SoSimple {
private:
	static int simObjCnt;
public:
	SoSimple() {
		simObjCnt++;
		cout << simObjCnt << "번째 SoSimple 객체" << endl;
	}
};
int SoSimple::simObjCnt = 0;//static 변수의 초기화 방법을 보이고 있다. 이렇듯 생성자가 아닌, 클래스 외부에서 초기화를 해야 하는 이유에 대해서는 잠시

class SoComplex {
private:
	static int cmxObjCnt;
public:
	SoComplex() {
		cmxObjCnt++;
		cout << cmxObjCnt << "번째 SoComplex 객체" << endl;
	}
	SoComplex(SoComplex &copy) {
		cmxObjCnt++;
		cout << cmxObjCnt << "번째 SoComplex 객체" << endl;
	}
};
int SoComplex::cmxObjCnt = 0;

int main() {
	SoSimple sim1;
	SoSimple sim2;

	SoComplex cmx1;
	SoComplex cmx2 = cmx1;
	SoComplex();
	return 0;
}