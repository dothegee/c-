// 프렌드를 이용한 연산자 중복
// 2+a를 위한 + 연산자 함수
// a+b를 위한 + 연산자 함수
// ++ 연산자 함수
// 3개의 함수를 프렌드로 작성

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
	friend Power operator+(int op1, Power op2); 
	friend Power operator+(Power op1, Power op2);
	friend Power& operator++(Power& op); // 전위 ++ 연산자 함수 프렌드 선언
	friend Power operator++(Power& op, int x); // 후위 ++ 연산자 함수 프렌드 선언
};

void Power::show() {
	cout << "kick = " << kick << ", punch = " << punch << endl;
}
Power operator+(int op1, Power op2) {
	Power tmp;
	tmp.kick = op1 + op2.kick;
	tmp.punch = op1 + op2.punch;
	return tmp;
}
Power operator+(Power op1, Power op2) {
	Power tmp;
	tmp.kick = op1.kick + op2.kick;
	tmp.punch = op1.punch + op2.punch;
	return tmp;
}
Power& operator++(Power& op) {
	op.kick++;
	op.punch++;
	return op;
}
Power operator++(Power& op, int x) {
	Power tmp = op;
	op.kick++;
	op.punch++;
	return tmp;
}

int main() {
	//2+a 위한 +연산자
	Power a(3, 5), b;
	a.show();
	b.show();
	b = 2 + a;
	a.show();
	b.show();

	//a+b를 위한 +연산자
	Power c;
	c = a + b;
	c.show();

	//전후위 ++ 연산자
	Power d, e;
	d = ++a;
	a.show();
	d.show();

	e = a++;
	a.show();
	e.show();

}