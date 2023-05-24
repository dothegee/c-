#include<iostream>
#include<vector>
using namespace std;

int square(int x) {
	return x * x;
}

int main() {
	// 기본 타입 선언에 auto 활용

	auto c = 'a';
	auto pi = 3.14; // 3.14가 실수이므로 pi는 double 타입을 선언됨
	auto ten = 10; // 10이 정수여서 ten은 int 타입으로 선언
	auto* p = &ten; // 변수 p 는 int * 타입으로 자동 선언
	cout << c << ' ' << pi << " " << ten << " " << *p << endl;

	//함수의 리턴 타입으로 추론
	auto ret = square(3); //변수 ret는 int
	cout << *p << " " << ret << endl;

	vector<int> v = { 1,2,3,4,5 };
	vector<int>::iterator it;
	for (it = v.begin();it != v.end();it++)
		cout << *it << " ";
	cout << endl;
	// auto 를 사용하여 복잡한 선언의 간소화
	for (auto it = v.begin();it != v.end();it++)
		cout << *it << " "; //1,2,3,4,5 출력
}