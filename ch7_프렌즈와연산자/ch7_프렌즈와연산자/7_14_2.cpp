//참조를 리턴하는 << 연산자 
//클래스 내에서 생성
#include<iostream>
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
	Power& operator<< (int op);
};
void Power::show() {
	cout << "kick = " << kick << ", punch = " << punch << endl;
}
Power& Power::operator<< (int op) {
	kick += op;
	punch += op;
	return *this;
}
int main() {
	Power a(1, 2);
	a << 3 << 5 << 6;
	a.show();
}