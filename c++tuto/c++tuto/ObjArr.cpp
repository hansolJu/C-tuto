#include<iostream>
#include<cstring>
using namespace std;

class Person {
private:
	char * name;
	int age;

public:
	Person(const char * myname, int myage)
		:age(myage)
	{
		name = new char[strlen(myname) + 1];
		strcpy(name, myname);
	}
	Person() {
		name = NULL;
		age = 0;
		cout << "called Person()" << endl;
	}
	void SetPersonInfo(char * myname, int myage) {
		name = myname;
		age = myage;
	}
	void ShowPersonInfo() const {
		cout << "이름: " << name << ",";
		cout << "나이: " << age << endl;
	}
	~Person() {
		delete[]name;
		cout << "called destructor!" << endl;
	}
};

int main() {
	Person parr[3];
	char namestr[100];
	char * strptr;
	int age;

	for (int i = 0; i < 3; i++) {
		cout << "이름: ";
		cin >> namestr;
		cout << "나이: ";
		cin >> age;

		strptr = new char[strlen(namestr) + 1];
		strcpy(strptr, namestr);
		parr[i].SetPersonInfo(strptr, age);
		//delete[]strptr;  ///왜지워지지;
	}
	parr[0].ShowPersonInfo();
	parr[1].ShowPersonInfo();
	parr[2].ShowPersonInfo();

	return 0;
}
