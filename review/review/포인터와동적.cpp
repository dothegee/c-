// ������ ����, �����޸� ����, 
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
	cout << "������ ���� radius = " << radius << endl;
}
Circle::Circle(int radius) {
	this->radius = radius;
	cout << "������ ���� radius = " << radius << endl;
}
Circle::~Circle() {
	cout << "�Ҹ��� ���� radius = " << radius << endl;
}





int main() {
	//////////////////������ ����/////////////////////
	//��ü ������
	Circle donut(30);
	Circle* pointer;
	pointer = &donut;
	cout << pointer->getArea() << endl;
	//�迭 ������
	Circle circleArray[2];
	circleArray[0].setRadius(10);
	circleArray[1].setRadius(20);
	Circle* arraypointer;
	arraypointer = circleArray; // �迭 ������ �Ҷ��� & �ʿ����
	for (int i = 0;i < 2;i++) {
		cout << arraypointer->getArea() << endl;
		arraypointer++;
	}
	/////////////////�����޸� �Ҵ� �� ��ȯ///////////
	//������
	int* ap = new int;
	*ap = 5;
	delete ap;
	//�迭
	int* aap = new int[3];
	for (int i = 0;i < 3;i++) {
		aap[i] = i;
	}
	delete[]aap;
	int* pArray = new int[] {1, 2, 3};
	delete[]pArray;
	//��ü
	Circle* p = new Circle(20);
	Circle* q;
	q = new Circle(30);
	cout << p->getArea() << endl << q->getArea() << endl;
}


