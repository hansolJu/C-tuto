#include<iostream>
using namespace std;

void IntegerPlus(int &ref1) {
	int temp = ref1;
	temp++;
	ref1 = temp;
}
void ReverseSign(int &ref1) {
	int temp = ref1;
	temp = -temp;
	ref1 = temp;
}

int main() {

	int val1 = 10;
	cout << "pure val: " << val1 << endl;
	IntegerPlus(val1);
	cout << "plus val: " << val1 << endl;
	ReverseSign(val1);
	cout << "plus val: " << val1 << endl;

	return 0;
}
