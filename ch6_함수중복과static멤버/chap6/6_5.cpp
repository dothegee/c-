// 디폴트 매개변수를 이용하여 간소화 연습
#include <iostream>
using namespace std;
///////////////////중복 함수
//void fillLine() {
//	for (int i = 0;i < 25;i++)
//		cout << '*';
//	cout << endl;
//}
//void fillLine(int n, char c) {
//	for (int i = 0;i < n;i++)
//		cout << c;
//	cout << endl;
//}
// 위 두개의 중복 함수를 디폴트 매개변수를 가진 하나의 함수로 작성
void fillLine(int n = 25, char c = '*') {
	for (int i = 0;i < n;i++) {
		cout << c;
	}
	cout << endl;
}

///////////////중복 생성자
//class MyVecter {
//	int* p;
//	int size;
//public:
//	MyVecter() {
//		p = new int[100];
//		size = 100;
//	}
//	MyVecter(int n) {
//		p = new int[n];
//		size = n;
//	}
//	~MyVecter() {
//		delete[]p;
//	}
//};
// 위 두개의 중복 함수를 디폴트 매개변수를 가진 하나의 생성자로 작성
class MyVector {
	int* p;
	int size;
public:
	MyVector(int n = 100) {
		p = new int[n];
		size = n;
	}
	~MyVector() {
		delete[]p;
	}
};

int main() {
	fillLine();
	fillLine(10, '%');

	MyVector* v1, * v2;
	v1 = new MyVector(); //디폴트로 정수 배열 100 동적 할당
	v2 = new MyVector(1024);//정수 배열 1024 동적 할당
	delete v1;
	delete v2;
}