// 상속의 종류 : public, protected, private 상속

//상속이 중첩될 때 접근 지정 사례

#include<iostream>
using namespace std;

class Base {
	int a;
protected:
	void setA(int a) {
		this->a = a;
	}
public:
	void showA() {
		cout << a;
	}
};
class Derived : private Base { // setA,showA는 Private속성으로 변경되어 Derived에 상속
	int b;
protected:
	void setB(int b) {
		this->b = b;
	}
public:
	void show() {
		setA(5); // setA는 Base클래스의 protected멤버이기때문에 파생클래스 Derived에게 접근 허용
		showA();// showA는 Base클래스의 pugblic멤버이기 때문에 파생클래스 Derived에게 접근 허용
		cout << b;
	}
};
class GrandDerived :private Derived {
	int c;
protected:
	void setAB(int x) {
		//setA(x); //setA는 private 속성으로 변경되어 Derived클래스에 상속되기 때문에 GrandDerived클래스에서 접근 불가
		//showA();//showA는 private속성으로 변경되어 Derived클래스에 상속되기 대문에 GrandDerived 클래스에서 접근 불가
		setB(x); //setB는 Derived클래스의 protected멤버이기 때문에 파생클래스 GrandDerived에게 접근 허용
	}
};