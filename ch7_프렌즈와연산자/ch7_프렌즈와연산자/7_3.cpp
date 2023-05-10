//프렌드 클래스 선언
//다른 클래스 전체를 프렌드로 선언
// RectManager 클래스 전체를 Rect 클래스의 프렌드로 선언하는 사례를 보인다.
// RectManager 클래스에는 두 개의 멤버 함수가 있으며,
// 이들은 모두 Rect 클래스의 private멤버를 자유롭게 접근
#include <iostream>
using namespace std;

class Rect;
// Rect 클래스가 선언되기 전에 먼저 참조되는 컴파일 오류를 막기 위한 선언문
class RectManager {
public:
	bool equals(Rect r, Rect s);
	void copy(Rect& dest, Rect& src);
};

class Rect {
	int width, height;
public:
	Rect(int width, int height) {
		this->width = width;
		this->height = height;
	}
	friend RectManager; // RectManager 클래스의 모든 함수를 프렌드 함수로 선언
};
bool RectManager::equals(Rect r, Rect s) {
	if (r.width == s.width && r.height == s.height)
		return true;
	else
		return false;
}
void RectManager::copy(Rect& dest, Rect& src) { //src를 dest에 복사
	dest.width = src.width;
	dest.height = src.height;
}

int main() {
	Rect a(3, 4), b(5, 6);
	RectManager man;

	man.copy(b, a);// a를 b에 복사한다.
	// 객체 b의 width, height값이 a와 같아진다.
	if (man.equals(a, b))
		cout << "equal" << endl;
	else
		cout << "not equal" << endl;
}