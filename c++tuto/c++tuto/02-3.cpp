#include<iostream>
using namespace std;
//����ü�� ���� ������ ���Ҽ� �ִ� ����.
//2���� ���󿡼��� ��ǥ�� ǥ���Ҽ� �ִ� ����ü�� ������ ���� �����Ѵ�.
typedef struct __Point {
	int xpos;
	int ypos;
} Point;
//���� ����ü�� ������� ������ ���� ����ϴ� �Լ��� ������ ���·� �����ϰ�(��������� �Լ��� ��ȯ�� ���ؼ� ����Ѵ�.)
Point & PntAdder(const Point &p1, const Point &p2) {
	Point *pptr = new Point;
	pptr->xpos = p1.xpos + p2.xpos;
	pptr->ypos = p1.ypos + p2.ypos;
	return *pptr;
}
//������ ������ �����Ͽ�, �� �Լ��� �̿��� ���������� �����ϴ� Main  �Լ��� �����غ���. ��, ����ü Point ���� ������ ������ ������ new ������ �̿��ؼ� �����ؾ��ϸ�, �Ҵ�� �޸� ������ �Ҹ굵 ö���ϰ� �ؾ��Ѵ�. ����� �̹����� �ذ��� ���ؼ��� ���� �� ������ ����Ҽ� �־���Ѵ�.
//�����Ҵ� �� ������ �Լ��� ������ �Ű������� ���ڷ� ��� �����ϴ°�
//�Լ� ���� ����� ������ ���������� ��ȯ�Ϸ��� �ش� ������ ��� �����ؾ� �ϴ°�?

int main(){
	Point *pptr1 = new Point;
	pptr1->xpos = 3;
	pptr1->ypos = 30;

	Point *pptr2 = new Point;
	pptr2->xpos = 70;
	pptr2->ypos = 7;

	Point &pref = PntAdder(*pptr1, *pptr2);
	cout << "[" << pref.xpos << ", " << pref.ypos << "]" << endl;

	delete pptr1;
	delete pptr2;
	delete &pref;
	return 0;
}