//동적 메모리 할당

#include<iostream>
using namespace std;

// 기본형식
// 데이터타입 *포인터변수 = new 데이터타입;
//
// delete 포인터변수;

int main() {
	int* p;

	p = new int; // int 타입 1개 할당
	//!p p==NULL과 동일
	if (!p) {
		cout << "메모리를 할당할 수 없습니다." << endl;
		return 0;
	}
	*p = 5;
	int n = *p;
	cout << "*p = " << *p << endl;
	cout << "n = " << n << endl;

	delete p;
	// n은 동적메모리가 아니기때문에 돌아감
	cout << "n = " << n << endl;
	// 밑의 코드를 치게 되면 오류
	// 왜냐하면 동적메모리를 지웠기 때문
	/*cout << "*p = " << *p << endl;*/

}