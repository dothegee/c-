//참조 변수 선언 방법 + 참조에 의한 호출
#include <iostream>
using namespace std;
// // 참조 변수 선언 방법
// int n = 2;
// int &refn = n; 
// //참조 변수 refn 선언. refn은 n에 대한 별명. refn과 n은 동일 변수

//참조에 의한 호출

void swap(int& a, int& b) {
	int tmp;
	tmp = a;
	a = b;
	b = tmp;
}

int main() {
	int a = 2, b = 4;
	cout << a << b << endl;
	swap(a, b);
	cout << a << b << endl;
}



// char&, char*, char 사용에 대한 비교
// char c = 'a'; // 변수 c 생성. 'a'로 초기화
// char* p = &c; // 포인터변수 p 생성. p는 변수 c의 주소를 가짐
// char& s = c; // 변수 s는 이름만 생성. s는 c에 대한 별명