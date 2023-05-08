// 함수 중복의 모호성
#include <iostream>
#include <string>
using namespace std;

/////////////////형 변환으로 인한 모호성
// char->int->long->float->double 순으로 자동 형 변환
// 다음과 같은 중복된 square()함수가 작성되어 있는 경우
float square(float a) {
	return a * a;
}
double square(double a) {
	return a * a;
}
// 정수 3을 float 타입으로 형변환할지 double 타입으로 할지 모호한 경우
// 컴파일 오류 발생!!!!!!!!!!!!!!!!!!!!!!!!
// 
/////////////////참조 매개 변수로 인한 모호성
//중복된 함수 중에서 참조 매개 변수를 가진 함수가 있는경우, 이들 사이에 모호성이 존재할 수 있다.
// 밑의 두 함수를 보게 되면
int add(int a, int b) {
	return a + b;
}
int add(int a, int& b) {
	b = a + b;
	return b;
}
//add(s,t);를 호출하게 되면 어떤 함수를 사용해야되는지 모호해진다.
// 
/////////////////디폴트 매개 변수로 인한 모호성
//디폴트 매개 변수를 가진 함수가 보통 매개 변수를 가진 함수와 중복 작성될 때
// 모호성이 존재할 수 있다.
void msg(int id) {
	cout << id << endl;
}
void msg(int id, string s = "") {
	cout << id << ":" << s << endl;
}
//msg(6);을 호출하게 되면 msg()함수중 어떤 함수를 호출해도 무관하므로, 컴파일 오류 발생!!!!!