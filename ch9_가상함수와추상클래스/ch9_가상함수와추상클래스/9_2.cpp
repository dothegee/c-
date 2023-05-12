//오버라이딩과 가상 함수 호출
// virtual키워드는 자신에 대한 호출 바인딩을 실행 시간까지 미루도록 지시하는 키워드
// 파생클래스에서 기본 클래스의 가상함수를 재정의하는 것
// -->> 오버라이딩
// 오버라이딩은 멤버함수에만 적용
// 가상함수를 재정의하는 오버라이딩의 경우 함수가 호출되는 실행 시간에 동적바인딩
// 그렇지 않은 경우(일반 함수 재정의) 컴파일시간에 결정된 함수가 단순히 호출(정적바인딩)

#include <iostream>
using namespace std;

class Base {
public: // 객체 d 에는 두개의 함수 f()가 존재하지만
	// Base의 f()는 존재감을 잃고, 항상 Derived의 f()가 호출됨
	virtual void f() {
		cout << "Base :: f() called" << endl;
	}
};
class Derived :public Base {
public:
	virtual void f() {
		cout << "Derived :: f() callled" << endl;
	}
};

void main() {
	Derived d, * pDer;
	pDer = &d; //객체 d를 가리킨다.
	pDer->f(); //Derived의 멤버 f() 호출
	d.f();

	Base* pBase, a;
	pBase = pDer; // 업체스팅. 객체 d를 가리킨다.
	pBase->f(); //동적 바인딩 발생!! Derived::f() 실행
	//pBase가 가리키는 객체는 오바라이딩한 derived의 f()를 포함하는 동적바인딩을 통해 Derived의 f()가 호출된다
	a.f();
}
// 객체 d에는 2개의 f()함수가 있으나, Derived의 f()가 Base의 f()를 무시하도록 오버라이딩 되었기 때문에
// Base의 f()에 대한 모든 호출은 실행 시간 중에 Derived의 f() 함수로 동적 바인딩된다.

// 오버라이딩의 목적
// 기본 클래스에 가상함수를 ㅁ나드는 목적은 파생 클래스들이 자신의 목적에 맞게 가상함수를 재정의 하도록 하는 것
// 기본 클래스의 가상 함수는 상속받는 파생 클래스에서 구현해야 할 일종의 함수 인터페이스를 제공
// 하나의 인터페이스에 대해 서로 다른 모양의 구현이라는 객체 지향 언어의 다형성(polymorphism)을 실현하는 도구
// 
//