#include <iostream>
using namespace std;

//������

class Circle {
public:
	int radius;
	Circle();
	Circle(int r);
	double getArea();
};

//���ӻ�����
Circle::Circle() : Circle(1){}
// ���� �����ڿ� �ڵ尡 �ߺ�. 
// �ߺ���  �ʱ�ȭ �ڵ带 �ϳ��ǻ����ڷ� ����, �ٸ� �����ڿ��� �� �����ڸ�ȣ���Ҽ� �ְ� �Ѵ�.
// �ڵ��� ����ȭ!!!!!!!
//Circle::Circle() {
//	radius = 1;
//	cout << "������ " << radius << " �� ����" << endl;
//}
//Ÿ�� ������
Circle::Circle(int r) {
	radius = r;
	cout << "������ " << radius << " �� ����" << endl;
}
double Circle::getArea() {
	return 3.14 * radius * radius;
}

int main() {
	Circle donut;
	double area = donut.getArea();
	cout << "donut ������ " << area << endl;

	Circle pizza(30);
	area = pizza.getArea();
	cout << "pizza ������ " << area << endl;
}