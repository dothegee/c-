//단항 연산자 중복
// 전위 연산자 !op, ~op, ++op, --op
// Power 클래스에 ! 연산자 작성
#include <iostream>
using namespace std;
class Power {
	int kick;
	int punch;
public:
	Power(int kick = 0, int punch = 0) {
		this->kick = kick;
		this->punch = punch;
	}
	void show();
	bool operator! ();
};

void Power::show() {
	cout << "kick = " << kick << ", " << "punch = " << punch << endl;
}

bool Power::operator!() {
	if (kick == 0 && punch == 0)
		return true;
	else
		return false;
}

int main() {
	Power a(0, 0), b(5, 5);
	cout << !a << endl << !b << endl;
	//!a == 1, !b == 0
	if (!a)
		cout << "a의 파워가 0이다." << endl;
	else
		cout << "a의 파워가 0이 아니다." << endl;
	if (!b)
		cout << "b의 파워가 0이다." << endl;
	else
		cout << "b의 파워가 0이 아니다." << endl;

}