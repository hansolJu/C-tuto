#include<iostream>
using namespace std;

class SoSimple
{
public:
	static int simObjCnt;
public://������ �Լ� ���� �������� ���
	SoSimple() {
		simObjCnt++;
	}
};

int SoSimple::simObjCnt = 0;

int main() {
	cout << SoSimple::simObjCnt << "��° SoSimple ��ü" << endl;//public���� ����� static�ɹ��� ��𼭵� ������ �����ϴ�.
	SoSimple sim1;
	SoSimple sim2;

	cout << SoSimple::simObjCnt << "��° SoSimple ��ü" << endl;
	cout << sim1.simObjCnt << "��° SoSimple ��ü" << endl;
	cout << sim2.simObjCnt << "��° SoSimple ��ü" << endl;

	return 0;
}