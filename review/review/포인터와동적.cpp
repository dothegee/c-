// 포인터 선언, 동적메모리 선언, 
#include <iostream>
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





int main() {
	//////////////////포인터 선언/////////////////////
	//객체 포인터
	Circle donut(30);
	Circle* pointer;
	pointer = &donut;
	cout << pointer->getArea() << endl;
	//배열 포인터
	Circle circleArray[2];
	circleArray[0].setRadius(10);
	circleArray[1].setRadius(20);
	Circle* arraypointer;
	arraypointer = circleArray; // 배열 포인터 할때는 & 필요없음
	for (int i = 0;i < 2;i++) {
		cout << arraypointer->getArea() << endl;
		arraypointer++;
	}
	/////////////////동적메모리 할당 및 반환///////////
	//정수형
	int* ap = new int;
	*ap = 5;
	delete ap;
	//배열
	int* aap = new int[3];
	for (int i = 0;i < 3;i++) {
		aap[i] = i;
	}
	delete[]aap;
	int* pArray = new int[] {1, 2, 3};
	delete[]pArray;
	//객체
	Circle* p = new Circle(20);
	Circle* q;
	q = new Circle(30);
	cout << p->getArea() << endl << q->getArea() << endl;
}


