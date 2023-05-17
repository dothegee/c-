// ���׸� ���� Ŭ���� �����

#include <iostream>
#include <string>
using namespace std;

template <class T>
class MyStack {
	int tos;//top of stack
	T data[100];///TŸ���� �迭. ����ũ��� 100
public:
	MyStack();
	void push(T element); // TŸ�� ���� element�� data[] �迭�� ����
	T pop();//������ ž�� �ִ� �����͸� data[] �迭���� ����
};

template <class T>
MyStack<T>::MyStack() { //������
	tos = -1; //������ ��� ����
}

template <class T>
void MyStack<T>::push(T element) {
	if (tos == 99) {
		cout << "stack full";
		return;
	}
	tos++;
	data[tos] = element;
}

template <class T>
T MyStack<T>::pop() {
	T retData;
	if (tos == -1) {
		cout << "stack empty";
		return 0;
	}
	retData = data[tos--];
	return retData;
}

class Point {
	int x, y;
public:
	Point(int x = 0, int y = 0) {
		this->x = x;
		this->y = y;
	}
	void show() {
		cout << "(" << x << ", " << y << ")" << endl;
	}
};

int main() {
	MyStack<int> iStack; // int�� ������ �� �ִ� ����
	iStack.push(3);
	cout << iStack.pop() << endl;
	
	MyStack<double> dStack;//double �� ������ �� �ִ� ����
	dStack.push(3.5);
	cout << dStack.pop() << endl;

	MyStack<char>* ap = new MyStack<char>();//char �� ������ �� �ִ� ����
	ap->push('a');
	cout << ap->pop() << endl;
	delete ap;

	///////////////���� 10-7

	MyStack<int*>ipStack; //int* �� �����ϴ� ����
	int* p = new int[3];
	for (int i = 0;i < 3;i++)
		p[i] = i * 10; // 0, 10, 20���� �ʱ�ȭ
	ipStack.push(p); //������ Ǫ��
	int* q = ipStack.pop(); //������ ��
	for (int i = 0;i < 3;i++)
		cout << q[i] << '\t'; 
	cout << endl;
	delete[]p;

	MyStack<Point> pointStack;//Point ��ü�� �����ϴ� ����
	Point a(2, 3), b;
	pointStack.push(a);//Point ��ü Ǫ��. ����Ǿ� ����
	b = pointStack.pop();//Point ��ü ��
	b.show();//Point ��ü ���

	MyStack<Point*> pStack; //Point*�� �����ϴ� ����
	pStack.push(new Point(10, 20)); // ���� ���� Point ��ü Ǫ��. �����͸� ����
	Point* pPoint = pStack.pop(); //Point ��ü�� ������ ��
	pPoint->show(); // Point ��ü ���

	MyStack<string> stringStack;//���ڿ��� �����ϴ� ����
	string s = "c++";
	stringStack.push(s);
	stringStack.push("java");
	cout << stringStack.pop() << "\t";
	cout << stringStack.pop() << endl;


}