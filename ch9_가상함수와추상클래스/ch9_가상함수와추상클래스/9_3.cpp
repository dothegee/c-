// �������̵� Ư¡
// �����Լ��� virtual �Ӽ���  ��ӵǴ� ���� �־�
// �Ļ�Ŭ�������� virtual Ű���带 �����ص� �ڵ����� �����Լ��� �ȴ�

// ����� �ݺ��Ǵ� ��� ���� �Լ� ȣ��

#include <iostream>
using namespace std;

class Base {
public: virtual void f() {
	cout << "Base::f() called" << endl;
}
};
class Derived :public Base {
public:void f() {
	cout << "Derived::f() called" << endl;
}
};
class GrandDerived : public Derived {
public:void f() {
	cout << "GrandDerived::f() called" << endl;
}
};
int main() {
	GrandDerived g;
	Base* bp;
	Derived* dp;
	GrandDerived* gp;
	bp = dp = gp = &g;
	bp->f();
	dp->f();
	gp->f();
}
// �������ε��� ���� ��� GrandDerived�� �Լ� f() ȣ��
