#include<iostream>
using namespace std;

//접근 지정자 설명
class Smaple {
private:
	// private 멤버 선언. 클래스 내의 멤버 함수만 접근 허용
	// 멤버 변수는 private로 지정이 바람직
public:
	//public 멤버 선언. 클래스 내외의 모든 함수에게 접근 허용
	// 클래스 내외를 막론하고 프로그램의 모든 함수들에게 접근 허용
	// 생성자는 public
protected:
	// protected 멤버 선언. 클래스 내의 멤버와 상속받은 파생클래스에만 접근 허용
	// 클래스 내의 멤버 함수와 이 클래스를 상속받은 파생 클래스의 멤버함수에게만 접근 허용

};
