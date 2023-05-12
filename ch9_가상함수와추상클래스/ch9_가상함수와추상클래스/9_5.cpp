// 가상 소멸자
// Base *p = new Derived();
// delete p;
// p가 Base 타입이므로 컴파일러는 ~Base() 소멸자를 호출하도록 컴파일
// 그러므로 ~Base()만 실행되고 ~Derived()가 실행되지 않는다
// 
// 소멸자를 가상 함수로 선언한 경우
// 소멸자를 갓아함수로 선언하면, 
// ~Base()에 대한 호출은 실행 중에 동적바인딩에 의해 ~Derived()에 대한 호출로 변하게 되어 ~Derived()가 실행
// ~Derived()코드 실행 후 ~Base() 코드가 실행 기본클래스와 파생클래스의 소멸자가 모두 순서대로 실행!!!!!!
//

// 소멸자를 가상 함수로 선언

#include<iostream>
using namespace std;

class Base {
public:
	virtual ~Base() {
		cout << "~Base() 실행" << endl;
	}
};
class Derived :public Base {
public:
	virtual ~Derived() {
		cout << "~Derived() 실행" << endl;
	}
};
int main() {
	Derived* dp = new Derived();
	Base* bp = new Derived();

	delete dp;
	delete bp;
}