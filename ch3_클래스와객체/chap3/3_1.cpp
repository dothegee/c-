#include<iostream>

using namespace std;



class Circle {
	//circle �����
public:
	int radius;
	double getArea();
};
//circle ������
double Circle::getArea() {
	return 3.14 * radius * radius;
}

int main() {
	//��ü donut ����
	Circle donut;
	//��ü�� ��� ���� -->> ��ü�̸�.���
	donut.radius = 1;
	double area = donut.getArea();
	cout << "donut ������ " << area << endl;

	Circle pizza;
	pizza.radius = 30;
	area = pizza.getArea();
	cout << "pizza ������ " << area << endl;

}