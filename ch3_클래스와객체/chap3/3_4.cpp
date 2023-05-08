#include <iostream>
using namespace std;

//생성자

class Circle {
public:
	int radius;
	Circle();
	Circle(int r);
	double getArea();
};

//위임생성자
Circle::Circle() : Circle(1){}
// 밑의 생성자와 코드가 중복. 
// 중복된  초기화 코드를 하나의생성자로 몰고, 다른 생성자에서 이 생성자를호출할수 있게 한다.
// 코드의 간소화!!!!!!!
//Circle::Circle() {
//	radius = 1;
//	cout << "반지름 " << radius << " 원 생성" << endl;
//}
//타켓 생성자
Circle::Circle(int r) {
	radius = r;
	cout << "반지름 " << radius << " 원 생성" << endl;
}
double Circle::getArea() {
	return 3.14 * radius * radius;
}

int main() {
	Circle donut;
	double area = donut.getArea();
	cout << "donut 면적은 " << area << endl;

	Circle pizza(30);
	area = pizza.getArea();
	cout << "pizza 면적은 " << area << endl;
}