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

	//��ü �����ͷ� ��� ����
	Circle* p; 
	p = &donut;
	cout << p->getArea() << endl;
	cout << (*p).getArea() << endl;

	p = &pizza;
	cout << p->getArea() << endl;
	cout << (*p).getArea() << endl;


	//��ü �迭 ���� �� Ȱ��

	//(1) Circle ��ü �迭 ����
	//�⺻ �����ڰ� ��� ������ ���� -->> �⺻�����ڸ� �����ؾߵ�
	Circle circleArray[3];

	//(2) �迭�� �� ���� ��ü�� ��� ����
	circleArray[0].setRadius(10);
	circleArray[1].setRadius(20);
	circleArray[2].setRadius(30);

	for (int i = 0;i < 3;i++)
		cout << "Circle " << i << "�� ������ " << circleArray[i].getArea() << endl;
	//(3) ���� Circle* p�� ���� �߱⶧���� ������ ������ 
	// Circle* p;
	//(4)
	p = circleArray;
	for (int i = 0;i < 3;i++) {
		//��ü �����ͷ� �迭 ����
		cout << "Circle " << i << "�� ������ " << p->getArea() << endl << (*p).getArea() << endl;
		//p�� �迭�� ���� ���Ҹ� ����Ŵ
		p++;
	}
		
}