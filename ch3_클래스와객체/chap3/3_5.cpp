#include<iostream>
using namespace std;

class Point {
	int x, y;
public:
	Point();
	Point(int a, int b);
	void show() {
		cout << "(" << x << ", " << y << ")" << endl;
	}

};
// 다양한 멤버변수 초기화

//Point :: Point() : x(0), y(0)  --> 멤버 변수 0으로 초기화
Point::Point() : Point(0, 0) {} //위임생성자
Point::Point(int a, int b) : x(a), y(b) {}



int main() {
	Point origin;
	Point target(10, 20);
	origin.show();
	target.show();
}