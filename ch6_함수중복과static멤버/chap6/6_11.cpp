//static ����� ������ �������λ���ϴ� ��
#include <iostream>
using namespace std;

class Circle {
private:
	static int numOfCircles; // ������ ���� ���� ���
	int radius;
public:
	Circle(int r = 1);
	~Circle() { numOfCircles--; }//������ ���� ���� ����
	double getArea() {
		return 3.14 * radius * radius;
	}
	static int getNumOfCircles() {
		return numOfCircles;
	}
};
Circle::Circle(int r) {
	radius = r;
	numOfCircles++; //������ ���� ���� ����
}
///////////static ��� ������ �ܺο� ���� ������ ����!!!!!!
int Circle::numOfCircles = 0; //0���� �ʱ�ȭ

int main() {
	Circle* p = new Circle[10]; //10���� ������ ����
	cout << "�����ϰ� �ִ� ���� ���� = " << p->getNumOfCircles() << endl;cout << "�����ϰ� �ִ� ���� ���� = " << p->getNumOfCircles() << endl;
	cout << "�����ϰ� �ִ� ���� ���� = " << Circle::getNumOfCircles() << endl;
	delete[]p;//10���� �Ҹ��� ����

	Circle a; //������ ����
	cout << "�����ϰ� �ִ� ���� ���� = " << a.getNumOfCircles() << endl;
	cout << "�����ϰ� �ִ� ���� ���� = " << Circle::getNumOfCircles() << endl;

	Circle b; //������ ����
	cout << "�����ϰ� �ִ� ���� ���� = " << b.getNumOfCircles() << endl;
	cout << "�����ϰ� �ִ� ���� ���� = " << Circle::getNumOfCircles() << endl;
}
	
// static ����Լ��� non-static ����� �����Ҽ� ����!!!!!!!!!!!!
// but, non-static����Լ��� static����� ���� ����!!!!!!!!!!!!!!!