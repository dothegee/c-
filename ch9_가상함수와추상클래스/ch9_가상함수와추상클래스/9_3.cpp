// 오버라이딩 특징
// 가상함수의 virtual 속성은  상속되는 성질 있어
// 파생클래스에서 virtual 키워드를 생량해도 자동으로 가상함수가 된다

// 상속이 반복되는 경우 가상 함수 호출

#include <iostream>
using namespace std;

class Base {
public: virtual void f() {
	cout << "Base::f() called" << endl;
}
};
class Derived :public Base {
public:void f() {
	cout << "Derived::f() called" << endl;
}
};
class GrandDerived : public Derived {
public:void f() {
	cout << "GrandDerived::f() called" << endl;
}
};
int main() {
	GrandDerived g;
	Base* bp;
	Derived* dp;
	GrandDerived* gp;
	bp = dp = gp = &g;
	bp->f();
	dp->f();
	gp->f();
}
// 동적바인딩에 의해 모두 GrandDerived의 함수 f() 호출
