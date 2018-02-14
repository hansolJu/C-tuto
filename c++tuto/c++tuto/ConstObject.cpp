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
	//obj.AddNum(20);//맴버함수 AddNum은 const 함수가 아니기때문에 호출이 불가능하다.
	obj.ShowData();

	return 0;
}