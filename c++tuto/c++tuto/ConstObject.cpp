#include<iostream>
using namespace std;

class SoSimple
{
public:
	SoSimple(int num) :num(num) {}
	SoSimple& AddNum(int n) {
		num += n;
		return *this;
	}
	void ShowData() const {
		cout << "num: " << num << endl;
	}
private:
	int num;
};

int main() {
	const SoSimple obj(7);
	//obj.AddNum(20);//�ɹ��Լ� AddNum�� const �Լ��� �ƴϱ⶧���� ȣ���� �Ұ����ϴ�.
	obj.ShowData();

	return 0;
}