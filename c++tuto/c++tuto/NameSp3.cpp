#include<iostream>

namespace BestComImpl {
	void SimpleFunc();
}

namespace BestComImpl {
	void PrettyFunc();
}

namespace ProgComImpl {
	void SimpleFunc(void);
}

int main() {
	BestComImpl::SimpleFunc();
	return 0;
}

void BestComImpl::SimpleFunc(void) {
	std::cout << "BestCom�� ������ �Լ�" << std::endl;
	PrettyFunc();//���� �̸� ����
	ProgComImpl::SimpleFunc();//�ٸ� �̸� ����;
}