#include<iostream>
#include<cstring>
using namespace std;

namespace COMP_POS {//응용못했던부분-> namespace로 두는것을 응용 못하고 그안에 함수넣을 생각을 못함.
	enum{//사원, 주임, 대리, 과장
		CLERK, SENIOR, ASSIST, MANAGER
	};
	void ShowPositionInfo(int pos) {
		switch (pos)
		{
		case CLERK:
			cout << "사원" << endl;
			break;
		case SENIOR:
			cout << "주임" << endl;
			break;
		case ASSIST:
			cout << "대리" << endl;
			break;
		case MANAGER:
			cout << "과장" << endl;
			break;
		}
	}
}

class NameCard
{
public:
	NameCard(const char * myname, const char * companyname, const char *callnumber, int rank)
		:pos(rank)
	{
		name = new char[strlen(myname) + 1];
		companyName = new char[strlen(companyname) + 1];
		callNumber = new char[strlen(callnumber) + 1];
		strcpy(name, myname);
		strcpy(companyName, companyname);
		strcpy(callNumber, callnumber);
	}
	void ShowNameCardInfo() {
		cout << "이름: " << name << endl;
		cout << "회사: " << companyName << endl;
		cout << "전화번호: " << callNumber << endl;
		cout << "직급: "; COMP_POS::ShowPositionInfo(pos);// 응용못했던부분
		cout << endl;
	}
	~NameCard() {
		delete[] name;
		delete[] companyName;
		delete[] callNumber;
		cout << "called destructor!" << endl;
	}
private:
	char * name;
	char * companyName;
	char * callNumber;
	int pos;
};

int main() {
	NameCard manClerk("Lee", "ABCEng", "010-1111-2222", COMP_POS::CLERK);
	NameCard manSENIOR("Hong", "OrangeEng", "010-3333-4444", COMP_POS::SENIOR);
	NameCard manAssist("Kim", "SoGoodComp", "010-5555-6666", COMP_POS::ASSIST);
	manClerk.ShowNameCardInfo();
	manSENIOR.ShowNameCardInfo();
	manAssist.ShowNameCardInfo();

	cout << "프로그램 마지막 라인" << endl;
	return 0;
}