//다중 상속
// 예시
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

//Adder 와 Subtractor를 다중 상속받는 Calculator 클래스 작성
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
		//switch (표현식) {
		//case x:
		//	표현식이 x 경우 실행할 코드
		//		break;
		//case y:
		//	표현식이 y 경우 실행할 코드
		//		break;
		//default:
		//	표현식이 x도 y도 아닐 때 실행할 코드
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