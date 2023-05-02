#include<iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle() { radius = 1; }
	Circle(int r) { radius = r; }
	void setRadius(int r) { radius = r; }
	double getArea();
};

double Circle::getArea() {
	return 3.14 * radius * radius;
}

int main() {
	Circle donut;
	Circle pizza(30);

	cout << donut.getArea() << endl;

	//객체 포인터로 멤버 접근
	Circle* p; 
	p = &donut;
	cout << p->getArea() << endl;
	cout << (*p).getArea() << endl;

	p = &pizza;
	cout << p->getArea() << endl;
	cout << (*p).getArea() << endl;


	//객체 배열 선언 및 활용

	//(1) Circle 객체 배열 생성
	//기본 생성자가 없어서 컴파일 오류 -->> 기본생성자를 생성해야됨
	Circle circleArray[3];

	//(2) 배열의 각 원소 객체의 멤버 접근
	circleArray[0].setRadius(10);
	circleArray[1].setRadius(20);
	circleArray[2].setRadius(30);

	for (int i = 0;i < 3;i++)
		cout << "Circle " << i << "의 면적은 " << circleArray[i].getArea() << endl;
	//(3) 위에 Circle* p를 정의 했기때문에 컴파일 오류남 
	// Circle* p;
	//(4)
	p = circleArray;
	for (int i = 0;i < 3;i++) {
		//객체 포인터로 배열 접근
		cout << "Circle " << i << "의 면적은 " << p->getArea() << endl << (*p).getArea() << endl;
		//p는 배열의 다음 원소를 가리킴
		p++;
	}
		
}