// 디폴트 매개 변수를 가진 함수 선언 및 호출
#include<iostream>
#include<string>
using namespace std;
// 원형 선언
void star(int a = 5);
void msg(int id, string text = "");
void f(char c = ' ', int line = 1);

//함수 구현
void star(int a) {
	for (int i = 0; i < a; i++) {
		cout << '*';
	}
	cout << endl;
}
void msg(int id, string text) {
	cout << id << ' ' << text << endl;
}
void f(char c, int line) {
	for (int i = 0;i < line;i++) {
		for (int j = 0;j < 10;j++) {
			cout << c;
		}
		cout << endl;
	}
}

int main() {
	star(); // == star(5)
	star(10);

	msg(10); // == msg(10,"")
	msg(10, "Hello");

	f(); // 한줄에 빈칸을 10개 출력한다.
	f('%'); // 한줄에 %를 10개 출력한다.
	f('@', 5); // 다섯줄에 @ 10개 출력한다
}