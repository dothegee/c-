//���׸��Լ��� �̸��� ���� �ߺ� �Լ� �ۼ�
#include <iostream>
using namespace std;

template<class T>
void print(T array[], int n) {
	for (int i = 0;i < n;i++)
		cout << array[i] << '\t';
	cout << endl;
}
// ���ø� �Լ��� �ߺ��� print() �Լ�
void print(char array[], int n) {
	for (int i = 0;i < n;i++)
		cout << (int)array[i] << '\t';
	cout << endl;
}

int main() {
	int x[] = { 1,2,3,4,5 };
	double d[5] = { 1.1,2.2,3.3,4.4,5.5 };
	print(x, 5);
	print(d, 5);
// �ߺ��� print()�Լ��� �켱 ���ε�
	char c[5] = { 1,2,3,4,5 };
	print(c, 5);
}