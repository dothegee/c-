// ����� ���� : public, protected, private ���

//����� ��ø�� �� ���� ���� ���

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
class Derived : private Base { // setA,showA�� Private�Ӽ����� ����Ǿ� Derived�� ���
	int b;
protected:
	void setB(int b) {
		this->b = b;
	}
public:
	void show() {
		setA(5); // setA�� BaseŬ������ protected����̱⶧���� �Ļ�Ŭ���� Derived���� ���� ���
		showA();// showA�� BaseŬ������ pugblic����̱� ������ �Ļ�Ŭ���� Derived���� ���� ���
		cout << b;
	}
};
class GrandDerived :private Derived {
	int c;
protected:
	void setAB(int x) {
		//setA(x); //setA�� private �Ӽ����� ����Ǿ� DerivedŬ������ ��ӵǱ� ������ GrandDerivedŬ�������� ���� �Ұ�
		//showA();//showA�� private�Ӽ����� ����Ǿ� DerivedŬ������ ��ӵǱ� �빮�� GrandDerived Ŭ�������� ���� �Ұ�
		setB(x); //setB�� DerivedŬ������ protected����̱� ������ �Ļ�Ŭ���� GrandDerived���� ���� ���
	}
};