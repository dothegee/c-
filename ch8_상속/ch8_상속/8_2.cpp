//protected 멤버에 대한 접근
#include<iostream>
#include<string>
using namespace std;

class Point {
protected:
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

class ColorPoint : public Point {
	string color;
public:
	void setColor(string color) {
		this->color = color;
	}
	void showColorPoint();
	bool equals(ColorPoint p);
};
void ColorPoint::showColorPoint() {
	cout << color << ":";
	showPoint();
}
bool ColorPoint::equals(ColorPoint p) {
	if (x == p.x && y == p.y && color == p.color)
		return true;
	else
		return false;
}

int main() {
	Point p;
	p.set(2, 3);
	ColorPoint cp;
	cp.set(3, 4);
	cp.setColor("Red");
	//protected 멤버로 선언된 x,y를 접근하기 때문에 컴파일 오류 발생!!
	//p.x = 5;
	//p.y = 5;
	//cp.x = 10;
	//cp.y = 10;
	ColorPoint cp2;
	cp2.set(3, 4);
	cp2.setColor("Red");
	cout << cp.equals(cp2) << endl;
	cout << ((cp.equals(cp2)) ? "true" : "false");

}