#include<iostream>
using namespace std;

class Temporary
{
public:
	Temporary(int n) :num(n) {
		cout << "create obj: " << num << endl;
	}
	~Temporary() {
		cout << "destory obj " << num << endl;
	}
	void ShowTempInfo() {
		cout << "My num is " << num << endl;
	}
private:
	int num;
};

int main() {
	Temporary(100);
	cout << "*********** after make!" << endl << endl;

	Temporary(200);
	cout << "*********** after make!" << endl << endl;

	const Temporary& ref = Temporary(300);
	cout << "*********** after make!" << endl << endl;
	return 0;
}