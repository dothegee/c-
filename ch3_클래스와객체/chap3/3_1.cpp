#include<iostream>

using namespace std;



class Circle {
	//circle 선언부
public:
	int radius;
	double getArea();
};
//circle 구현부
double Circle::getArea() {
	return 3.14 * radius * radius;
}

int main() {
	//객체 donut 생성
	Circle donut;
	//객체의 멤버 접근 -->> 객체이름.멤버
	donut.radius = 1;
	double area = donut.getArea();
	cout << "donut 면적은 " << area << endl;

	Circle pizza;
	pizza.radius = 30;
	area = pizza.getArea();
	cout << "pizza 면적은 " << area << endl;

}