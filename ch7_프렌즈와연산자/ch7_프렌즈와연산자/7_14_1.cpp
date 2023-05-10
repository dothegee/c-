//참조를 리턴하는 << 연산자 
//프렌드 이용
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
	friend Power& operator<< (Power& op1, int op2);
};
void Power::show() {
	cout << "kick = " << kick << ", punch = " << punch << endl;
}
Power& operator<< (Power& op1, int op2) {
	op1.kick = op1.kick + op2;
	op1.punch = op1.punch + op2;
	return op1;
}
int main() {
	Power a(1, 2);
	a << 3 << 5 << 6;
	a.show();
}