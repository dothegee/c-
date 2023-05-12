// ���� �Ҹ���
// Base *p = new Derived();
// delete p;
// p�� Base Ÿ���̹Ƿ� �����Ϸ��� ~Base() �Ҹ��ڸ� ȣ���ϵ��� ������
// �׷��Ƿ� ~Base()�� ����ǰ� ~Derived()�� ������� �ʴ´�
// 
// �Ҹ��ڸ� ���� �Լ��� ������ ���
// �Ҹ��ڸ� �����Լ��� �����ϸ�, 
// ~Base()�� ���� ȣ���� ���� �߿� �������ε��� ���� ~Derived()�� ���� ȣ��� ���ϰ� �Ǿ� ~Derived()�� ����
// ~Derived()�ڵ� ���� �� ~Base() �ڵ尡 ���� �⺻Ŭ������ �Ļ�Ŭ������ �Ҹ��ڰ� ��� ������� ����!!!!!!
//

// �Ҹ��ڸ� ���� �Լ��� ����

#include<iostream>
using namespace std;

class Base {
public:
	virtual ~Base() {
		cout << "~Base() ����" << endl;
	}
};
class Derived :public Base {
public:
	virtual ~Derived() {
		cout << "~Derived() ����" << endl;
	}
};
int main() {
	Derived* dp = new Derived();
	Base* bp = new Derived();

	delete dp;
	delete bp;
}