//���� ���
// ����
//class MP3 {
//public:
//	void play();
//	void stop();
//};
//
//class MobilePhone {
//public:
//	bool sendCall();
//	bool receiveCall();
//	bool sendSMS();
//	bool receiveSMS();
//};
//
//class MusicPhone : public MP3, public MobilePhone {
//public:
//	void dial();
//};

//Adder �� Subtractor�� ���� ��ӹ޴� Calculator Ŭ���� �ۼ�
#include <iostream>
using namespace std;

class Adder {
protected:
	int add(int a, int b) {
		return a + b;
	}
};
class Subtractor {
protected:
	int minus(int a, int b) {
		return a - b;
	}
};
class Calculator :public Adder, public Subtractor {
public:
	int calc(char op, int a, int b);
};
int Calculator::calc(char op, int a, int b) {
	int res = 0;
	switch (op) {
		//switch (ǥ����) {
		//case x:
		//	ǥ������ x ��� ������ �ڵ�
		//		break;
		//case y:
		//	ǥ������ y ��� ������ �ڵ�
		//		break;
		//default:
		//	ǥ������ x�� y�� �ƴ� �� ������ �ڵ�
		//}
	case '+':
		res = add(a, b);
		break;
	case '-':
		res = minus(a, b);
		break;
	}
	return res;
}

int main() {
	Calculator handCalculator;
	cout << "2 + 4 = " << handCalculator.calc('+', 2, 4) << endl;
	cout << "100 - 9 = " << handCalculator.calc('-', 100, 9) << endl;
}