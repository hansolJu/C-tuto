#include<iostream>
using namespace std;

void Counter() {
	static int cnt;// static ������ ���������� ���������� �ʱ�ȭ���� ������ 0���� �ʱ�ȭ�ȴ�. 
	//�׸��� �� ������ �� �ѹ� ������ �ȴ�. ��, cnt�� counter�Լ��� ȣ��� ������ ���Ӱ� �Ҵ�Ǵ� ���������� �ƴϴ�.
	cnt++;
	cout << "Current cnt: " << cnt << endl;
}

int main() {
	for (int i = 0; i < 10; i++) {
		Counter();
	}
	return 0;
}