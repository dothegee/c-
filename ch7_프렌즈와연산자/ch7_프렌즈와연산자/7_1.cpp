// 프렌즈 함수 선언
#include <iostream>
using namespace std;

class Rect; // 클래스가 선언되기 전에 먼저 참조되는 컴파일 오류를 막기 위한 선언문
bool equals(Rect r, Rect s); //equals() 함수 선언

class Rect {
	int width, height;
public:
	Rect(int width, int height) {
		this->width = width;
		this->height = height;
	}
	friend bool equals(Rect r, Rect s); //프렌드 선언
};
bool equals(Rect r, Rect s) {
	if (r.width == s.width && r.height == s.height)
		// equals()함수는 private 속성을 가진 width, height에 접근 가능
		// 프렌드로 선언되었기 때문에
		return true;
	else
		return false;
}

int main() {
	Rect a(3, 4), b(4, 5);
	if (equals(a, b))
		cout << "equal" << endl;
	else
		cout << "not equal" << endl;
}