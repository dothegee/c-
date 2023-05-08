//static 멤버를 가진 Math 클래스 작성
#include <iostream>
using namespace std;
// 객체지향언어에서 추구하는 핵심 가치가 캡슐화
// 전역함수나 전역변수를 없애 모든함수나 변수를 클래스 안에 선언
// 전역변수와 전역함수를 선언하지말고 클래스에 static멤버로 선언하여 캡슐화
//
class Math {
public:
	static int abs(int a) {
		return a > 0 ? a : -a;
	}
	static int max(int a, int b) {
		return (a > b) ? a : b;
	}
	// (a > b) ? a : b 의 뜻
	/*if (a > b)
		return a;
	else
		return b*/
	static int min(int a, int b) {
		return (a > b) ? b : a;
	}
};
int main() {
	cout << Math::abs(-5) << endl;
	cout << Math::max(10, 8) << endl;
	cout << Math::min(-3, -8) << endl;
}