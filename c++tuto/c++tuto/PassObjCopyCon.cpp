#include<iostream>
using namespace std;

class SoSimple
{
public:
	SoSimple(int n):num(n){}
	SoSimple(const SoSimple& copy) :num(copy.num) {
		cout << "Called SoSimple(const SoSimple& copy)" << endl;
	}
	void ShowData() {
		cout << "num: " << num << endl;
	}

private:
	int num;
};

void SimpleFuncObj(SoSimple ob) {
	ob.ShowData();
}

int main() {
	SoSimple obj(7);
	cout << "�Լ�ȣ�� ��" << endl;
	SimpleFuncObj(obj);
	cout << "�Լ�ȣ�� ��" << endl;
	return 0;	
}