//연산자 중복
//일종의 다형성(polymorphism)

// =,-,*,/,==,!=,%,&& 등과 같이 본래부터 있는 C++ 연사자에 새로운 의미 추가 가능.
// %%,##등 새로운 연산자를 만들어 낼 수는 없음.

// 피연산자의 타입이 다른 연산을 새로 정의하는 것
// 함수를 통해 이루어짐
// 반드시 클래스와 관계를 가짐
// 피연산자의 개수를 바꿀 수는 없음
// 연산의 우선순위를 바꿀 수 없음
// 모든 연산자가 중복 가능한 것은 아님
// -> (.  .*  ::  ?: ) 불가능
// /////////// 연산자 함수를 선언하는 방법
// 리턴타입 operator 연산자(매개변수리스트);
// 연산자 함수는 이름이 'operator'키워드와 '연산자'로 구성된다는 점 외에는 보통 함수 선언과 동일

// 이항 연산자 중복
// 두개의 Power 객체를 더하는 + 연산자 작성
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
	Power operator+(Power op2); //+ 연산자 함수 선언
};
void Power::show() {
	cout << "kick = " << kick << ", " << "punch = " << punch << endl;
}
Power Power::operator+(Power op2) {
	Power tmp;// 임시 객체 생성
	tmp.kick = this->kick + op2.kick;
	tmp.punch = this->punch + op2.punch;
	return tmp;
}
int main() {
	Power a(3, 5), b(4, 6), c;
	c = a + b;
	a.show();
	b.show();
	c.show();
}