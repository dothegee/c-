//���� �޸� �Ҵ�

#include<iostream>
using namespace std;

// �⺻����
// ������Ÿ�� *�����ͺ��� = new ������Ÿ��;
//
// delete �����ͺ���;

int main() {
	int* p;

	p = new int; // int Ÿ�� 1�� �Ҵ�
	//!p p==NULL�� ����
	if (!p) {
		cout << "�޸𸮸� �Ҵ��� �� �����ϴ�." << endl;
		return 0;
	}
	*p = 5;
	int n = *p;
	cout << "*p = " << *p << endl;
	cout << "n = " << n << endl;

	delete p;
	// n�� �����޸𸮰� �ƴϱ⶧���� ���ư�
	cout << "n = " << n << endl;
	// ���� �ڵ带 ġ�� �Ǹ� ����
	// �ֳ��ϸ� �����޸𸮸� ������ ����
	/*cout << "*p = " << *p << endl;*/

}