#include<iostream>
using namespace std;

class SimpleClass
{
public:
	SimpleClass();
	SimpleClass(int n);
	SimpleClass(int n1, int n2);
	~SimpleClass();
	void ShowData() const {
		cout << num1 << ' ' << num2 << endl;
	}
private:
	int num1;
	int num2;
};

SimpleClass::SimpleClass()
{
	num1 = 0;
	num2 = 0;
}
SimpleClass::SimpleClass(int n) {
	num1 = n;
	num2 = 0;
}
SimpleClass::SimpleClass(int n1, int n2) {
	num1 = n1;
	num2 = n2;
}
SimpleClass::~SimpleClass()
{
}
int main() {
	SimpleClass sc1;
	sc1.ShowData();

	SimpleClass sc2(100);
	sc2.ShowData();

	SimpleClass sc3(100, 200);
	sc3.ShowData();
	return 0;
}