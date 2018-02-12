#include<iostream>
using namespace std;

class SelfRef
{
public:
	SelfRef(int n) :num(n) {
		cout << "��ü ����" << endl;
	}
	SelfRef&Adder(int n) {
		num += n;
		return *this;
	}
	SelfRef&ShowTwoNumber() {
		cout << num << endl;
		return *this;
	}

private:
	int num;
};

int main() {
	SelfRef obj(3);
	SelfRef &ref = obj.Adder(2);

	obj.ShowTwoNumber();
	ref.ShowTwoNumber();
	ref.Adder(1).ShowTwoNumber().Adder(2).ShowTwoNumber();
	return 0;
}
