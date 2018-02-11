#include<iostream>
#include<cstring>
using namespace std;

namespace COMP_POS {//������ߴ��κ�-> namespace�� �δ°��� ���� ���ϰ� �׾ȿ� �Լ����� ������ ����.
	enum{//���, ����, �븮, ����
		CLERK, SENIOR, ASSIST, MANAGER
	};
	void ShowPositionInfo(int pos) {
		switch (pos)
		{
		case CLERK:
			cout << "���" << endl;
			break;
		case SENIOR:
			cout << "����" << endl;
			break;
		case ASSIST:
			cout << "�븮" << endl;
			break;
		case MANAGER:
			cout << "����" << endl;
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
		cout << "�̸�: " << name << endl;
		cout << "ȸ��: " << companyName << endl;
		cout << "��ȭ��ȣ: " << callNumber << endl;
		cout << "����: "; COMP_POS::ShowPositionInfo(pos);// ������ߴ��κ�
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

	cout << "���α׷� ������ ����" << endl;
	return 0;
}