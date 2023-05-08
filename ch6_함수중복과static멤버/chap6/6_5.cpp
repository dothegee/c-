// ����Ʈ �Ű������� �̿��Ͽ� ����ȭ ����
#include <iostream>
using namespace std;
///////////////////�ߺ� �Լ�
//void fillLine() {
//	for (int i = 0;i < 25;i++)
//		cout << '*';
//	cout << endl;
//}
//void fillLine(int n, char c) {
//	for (int i = 0;i < n;i++)
//		cout << c;
//	cout << endl;
//}
// �� �ΰ��� �ߺ� �Լ��� ����Ʈ �Ű������� ���� �ϳ��� �Լ��� �ۼ�
void fillLine(int n = 25, char c = '*') {
	for (int i = 0;i < n;i++) {
		cout << c;
	}
	cout << endl;
}

///////////////�ߺ� ������
//class MyVecter {
//	int* p;
//	int size;
//public:
//	MyVecter() {
//		p = new int[100];
//		size = 100;
//	}
//	MyVecter(int n) {
//		p = new int[n];
//		size = n;
//	}
//	~MyVecter() {
//		delete[]p;
//	}
//};
// �� �ΰ��� �ߺ� �Լ��� ����Ʈ �Ű������� ���� �ϳ��� �����ڷ� �ۼ�
class MyVector {
	int* p;
	int size;
public:
	MyVector(int n = 100) {
		p = new int[n];
		size = n;
	}
	~MyVector() {
		delete[]p;
	}
};

int main() {
	fillLine();
	fillLine(10, '%');

	MyVector* v1, * v2;
	v1 = new MyVector(); //����Ʈ�� ���� �迭 100 ���� �Ҵ�
	v2 = new MyVector(1024);//���� �迭 1024 ���� �Ҵ�
	delete v1;
	delete v2;
}