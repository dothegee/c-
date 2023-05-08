//static 멤버를 공유의 목적으로사용하는 예
#include <iostream>
using namespace std;

class Circle {
private:
	static int numOfCircles; // 생성된 원의 개수 기억
	int radius;
public:
	Circle(int r = 1);
	~Circle() { numOfCircles--; }//생성된 원의 개수 감소
	double getArea() {
		return 3.14 * radius * radius;
	}
	static int getNumOfCircles() {
		return numOfCircles;
	}
};
Circle::Circle(int r) {
	radius = r;
	numOfCircles++; //생성된 원의 개수 증가
}
///////////static 멤버 변수는 외부에 전역 변수로 선언!!!!!!
int Circle::numOfCircles = 0; //0으로 초기화

int main() {
	Circle* p = new Circle[10]; //10개의 생성자 실행
	cout << "생존하고 있는 원의 개수 = " << p->getNumOfCircles() << endl;cout << "생존하고 있는 원의 개수 = " << p->getNumOfCircles() << endl;
	cout << "생존하고 있는 원의 개수 = " << Circle::getNumOfCircles() << endl;
	delete[]p;//10개의 소멸자 실행

	Circle a; //생성자 실행
	cout << "생존하고 있는 원의 개수 = " << a.getNumOfCircles() << endl;
	cout << "생존하고 있는 원의 개수 = " << Circle::getNumOfCircles() << endl;

	Circle b; //생성자 실행
	cout << "생존하고 있는 원의 개수 = " << b.getNumOfCircles() << endl;
	cout << "생존하고 있는 원의 개수 = " << Circle::getNumOfCircles() << endl;
}
	
// static 멤버함수는 non-static 멤버에 접근할수 없음!!!!!!!!!!!!
// but, non-static멤버함수는 static멤버에 접근 가능!!!!!!!!!!!!!!!