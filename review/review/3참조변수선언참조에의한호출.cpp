//���� ���� ���� ��� + ������ ���� ȣ��
#include <iostream>
using namespace std;
// // ���� ���� ���� ���
// int n = 2;
// int &refn = n; 
// //���� ���� refn ����. refn�� n�� ���� ����. refn�� n�� ���� ����

//������ ���� ȣ��

void swap(int& a, int& b) {
	int tmp;
	tmp = a;
	a = b;
	b = tmp;
}

int main() {
	int a = 2, b = 4;
	cout << a << b << endl;
	swap(a, b);
	cout << a << b << endl;
}



// char&, char*, char ��뿡 ���� ��
// char c = 'a'; // ���� c ����. 'a'�� �ʱ�ȭ
// char* p = &c; // �����ͺ��� p ����. p�� ���� c�� �ּҸ� ����
// char& s = c; // ���� s�� �̸��� ����. s�� c�� ���� ����