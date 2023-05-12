////////////////// �߻� Ŭ����///////////////
// ���� ���� �Լ���
// �⺻ Ŭ������ �ۼ��� �����Լ��� ������ ��������
// �Ļ�Ŭ�������� �������Ͽ� ������ �Լ��� �˷��ִ� �������̽� ����
// ���� ���� �Լ��� �Լ��� �ڵ尡 ���� ���� �ִ� �����Լ��� ���´´�
// EXAMPLE
// class Shape{
// public:
//     virtual void draw() = 0; }// ���������Լ� ����
// �߻� Ŭ������ ����
// �߻� Ŭ������ �ν��Ͻ��� ������ �������� ������ �ʰ�,
// ����� ���� �⺻ Ŭ������ Ȱ���ϴ� ���� ����
// ���� �����Լ��� ���� �Ļ�Ŭ������ ������ �Լ��� ������ �����ִ� �������̽� ����
// 
// �߻�Ŭ���� ���
// �߻�Ŭ������ ��ӹ޴� �Ļ� Ŭ������ �ڵ����� �߻�Ŭ������ �ȴ�
// ���� ���� �Լ��� �״�� ��ӹޱ� �����̴�
// 
// �߻�Ŭ���� ����
// �л� Ŭ������ �߻�Ŭ������ ���� ���� �Լ��� �ڵ带 �ۼ����� ����
// �Ļ�Ŭ������ ������ Ŭ������ �Ƿ���
// ��ӹ��� �߻�Ŭ������ ��� ���������Լ��� �������̵��Ͽ� ����!!


#include <iostream>
using namespace std;

// (1) �߻� Ŭ���� ���� ����

class Calculator1 {//�߻�Ŭ����
public:
	virtual int add(int a, int b) = 0;//�� ������ �� ����
	virtual int subtract(int a, int b) = 0;//�� ������ �� ����
	virtual double average(int a[], int size) = 0;//�迭 a�� ��� ����. size�� �迭�� ũ��
};
class GoodCalc :public Calculator1 {
public:
	int add(int a, int b) {
		return a + b;
	}
	int subtract(int a, int b) {
		return a - b;
	}
	double average(int a[], int size) {
		double sum = 0;
		for (int i = 0;i < size;i++)
			sum += a[i];
		return sum / size;
	}
};

// (2) �߻� Ŭ������ ��ӹ޴� �Ļ� Ŭ���� ���� ����//
class Calculator2 { // �߻� Ŭ����
	void input() {
		cout << "���� 2���� �Է��ϼ��� >> ";
		cin >> a >> b;
	}
protected:
	int a, b;
	virtual int calc(int a, int b) = 0; // ���������Լ�����
public:
	void run() {
		input();
		cout << "���� ���� " << calc(a, b) << endl;
	}
};
class Adder :public Calculator2 {
protected:
	virtual int calc(int a, int b) {
		return a + b;
	}
};
class Subtractor :public Calculator2 {
protected:
	virtual int calc(int a, int b) {
		return a - b;
	}
};

int main() {
	//(1)�߻� Ŭ���� ���� ���� ���� main �ڵ�
	int a[] = { 1,2,3,4,5 };
	Calculator1* p = new GoodCalc();
	cout << p->add(2, 3) << endl;
	cout << p->subtract(4, 2) << endl;
	cout << p->average(a, 5) << endl;
	delete p;

	//(2)�߻�Ŭ������ ��ӹ޴� �Ļ� Ŭ���� ���� ���� ���� main �ڵ�
	Adder adder;
	Subtractor sub;
	adder.run();
	sub.run();
}