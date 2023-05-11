// 상속의 종류 : public, protected, private 상속

//protected 상속 사례

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
class Derived :protected Base {
	int b;
protected:
	void setB(int b) {
		this->b = b;
	}
public:
	void showB() {
		cout << b;
	}
};
int main() {
	Derived x;
	// 주석처리는 컴파일 오류
	//x.a = 5; // a는 Derived 클래스에상속되지만 private 멤버이므로 접근 불가
	//x.setA(10);
	//x.showA();
	// setA,showA멤버는 protected 멤버로 변경되어 Derived 클래스에 상속되기 때문에 Derived 클래스 외부에서 접근 불가
	//x.b = 10; // b는 private멤버이기 때문에 Derived 클래스 외부에서 접근 불가
	//x.setB(10);//setB는 protected 멤버이기 때문에 main()에서 접근 불가 
	x.showB();
	// showB는 public 멤버이기 때문에 누구나 접근 가능
}