#include<iostream>
#include<cstring>
using namespace std;

class Girl;
class Boy
{
public:

	Boy(int len):height(len){}
	void ShowYourFriendInfo(Girl&frn);
private:
	int height;
	friend class Girl;//Girl 클래스에 대한 friend 선언
};

class Girl
{
public:
	Girl(const char * num) {
		strcpy(phNum, num);
	}
	void ShowYourFirendInfo(Boy &frn);
	friend class Boy;
private:
	char phNum[20];
};

void Boy::ShowYourFriendInfo(Girl &frn) {
	cout << "Her phone number: " << frn.phNum << endl;
}

void Girl::ShowYourFirendInfo(Boy&frn) {
	cout << "His height: " << frn.height << endl;
}

int main() {
	Boy boy(170);
	Girl girl("010-1234-5678");
	boy.ShowYourFriendInfo(girl);
	girl.ShowYourFirendInfo(boy);
	return 0;
}