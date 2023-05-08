#include<iostream>
using namespace std;

class Circle {
private:
	int radius;
public:
	Circle();
	Circle(int r);
	~Circle();
	double getArea() {
		return 3.14 * radius * radius;
	}
	int getRadius() {
		return radius;
	}
	void setRadius(int radius) {
		this->radius = radius;
	}
};
Circle::Circle() {
	radius = 1;
	cout << "생성자 실행 radius = " << radius << endl;
}
Circle::Circle(int radius) {
	this->radius = radius;
	cout << "생성자 실행 radius = " << radius << endl;
}
Circle::~Circle() {
	cout << "소멸자 실행 radius = " << radius << endl;
}

//값에 의한 호출
void increase(Circle c) {
	int r = c.getRadius();
	c.setRadius(r + 1);
}
//객체에 의한 호출
void increase(Circle* p) {
	int r = p->getRadius();
	p->setRadius(r + 1);
}
int main() {
	Circle waffle(30);
	// 값에 의한 호출을 하여 waffle radius 값 변하지 않음
	increase(waffle);
	// increase 안에 들어간 Circle 생성자 실행 없이 소멸자만 실행함
	cout << waffle.getRadius() << endl;
	// 주소에 의한 호출을 하여 waffle radius 값이 변함
	increase(&waffle);
	cout << waffle.getRadius() << endl;
}