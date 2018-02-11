#include<iostream>
using namespace std;

const int num = 12;

int main() {
	const int * ptr = &num;
	const int *(& ref) = ptr;

	cout << *ptr << endl;
	cout << *ref << endl;
	return 0;
}