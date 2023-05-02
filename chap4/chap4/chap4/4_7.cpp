//new를 이용한객체의 동적생성과 생성자
//클래스이름 *포인터변수 = new 클래스이름;
//클래스이름 *포인터변수 = new 클래스이름(생성자매개변수리스트);

//Circle 객체의 동적 생성 및 반환 기초 및 응용
#include<iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle();
	Circle(int r);
	~Circle();
	void setRadius(int r) {
		radius = r;
	}
	double getArea() {
		return 3.14 * radius * radius;
	}
};

Circle::Circle() {
	radius = 1;
	cout << "생성자 실행 radius = " << radius << endl;
}
Circle::Circle(int r) {
	radius = r;
	cout << "생성자실행 radius = " << radius << endl;
}
Circle::~Circle() {
	cout << "소멸자 실행 radius = " << radius << endl;
}

int main() {
	Circle* p, * q;
	p = new Circle;
	q = new Circle(30);
	cout << p->getArea() << endl << q->getArea() << endl;
	delete p;
	delete q;

	int radius;
	while (true) {
		cout << "정수 반지름 입력(음수이면 종료)>> ";
		cin >> radius;
		if (radius < 0)
			break;
		Circle* p = new Circle(radius);
		cout << "원의 면적은 " << p->getArea() << endl;
		delete p;
	}
}