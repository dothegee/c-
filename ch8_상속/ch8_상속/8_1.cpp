// Point 클래스를 상속받는 ColorPoint 클래스 만들기
#include<iostream>
#include<string>
using namespace std;

class Point {
	int x, y;
public:
	void set(int x, int y) {
		this->x = x;
		this->y = y;
	}
	void showPoint() {
		cout << "(" << x << ", " << y << ")" << endl;
	}
};
class ColorPoint : public Point {// ColorPoint가 Point를 상속받음
	// 상속 선언
	string color;
public:
	void setColor(string color) {
		this->color = color;
	}
	void showColorPoint();
};
void ColorPoint::showColorPoint() {
	cout << color << ':';
	showPoint();
}
int main() {
	Point p; // 기본 클래스 객체 생성
	ColorPoint cp; // 파생 클래스 객체 생성
	cp.set(3, 4);
	cp.setColor("Red");
	cp.showColorPoint();
}