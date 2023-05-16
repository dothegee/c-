#include<iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle(int radius = 1) {
		this->radius = radius;
	}
	int getRadius() {
		return radius;
	}
};
// template 키워드를 이용하면, 중복 함수들을 일반화시킨 특별한 함수를 만들수 있다.
// 제네릭 함수라 함
// 밑은 myswap()함수를 template키워드로 일반화시키는 과정
//
template<class T>
void myswap(T& a, T& b) {
	T tmp;
	tmp = a;
	a = b;
	b = tmp;
}

int main() {
	int a = 4, b = 5;
	myswap(a, b);
	cout << "a = " << a << ", b = " << b << endl;

	double c = 0.3, d = 12.5;
	myswap(c, d);
	cout << "c = " << c << ", d = " << d << endl;

	Circle donut(5), pizza(20);
	myswap(donut, pizza);
	cout << "donut반지름 = " << donut.getRadius() << endl;
	cout << "pizza반지름 = " << pizza.getRadius() << endl;
}