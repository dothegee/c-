// ����� ���� : public, protected, private ���

//protected ��� ���

#include<iostream>
using namespace std;

class Base {
	int a;
protected:
	void setA(int a) {
		this->a = a;
	}
public:
	void showA() {
		cout << a;
	}
};
class Derived :protected Base {
	int b;
protected:
	void setB(int b) {
		this->b = b;
	}
public:
	void showB() {
		cout << b;
	}
};
int main() {
	Derived x;
	// �ּ�ó���� ������ ����
	//x.a = 5; // a�� Derived Ŭ��������ӵ����� private ����̹Ƿ� ���� �Ұ�
	//x.setA(10);
	//x.showA();
	// setA,showA����� protected ����� ����Ǿ� Derived Ŭ������ ��ӵǱ� ������ Derived Ŭ���� �ܺο��� ���� �Ұ�
	//x.b = 10; // b�� private����̱� ������ Derived Ŭ���� �ܺο��� ���� �Ұ�
	//x.setB(10);//setB�� protected ����̱� ������ main()���� ���� �Ұ� 
	x.showB();
	// showB�� public ����̱� ������ ������ ���� ����
}