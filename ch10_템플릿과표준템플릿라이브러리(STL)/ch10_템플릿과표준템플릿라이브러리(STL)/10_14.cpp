#include<iostream>
#include<vector>
using namespace std;

int square(int x) {
	return x * x;
}

int main() {
	// �⺻ Ÿ�� ���� auto Ȱ��

	auto c = 'a';
	auto pi = 3.14; // 3.14�� �Ǽ��̹Ƿ� pi�� double Ÿ���� �����
	auto ten = 10; // 10�� �������� ten�� int Ÿ������ ����
	auto* p = &ten; // ���� p �� int * Ÿ������ �ڵ� ����
	cout << c << ' ' << pi << " " << ten << " " << *p << endl;

	//�Լ��� ���� Ÿ������ �߷�
	auto ret = square(3); //���� ret�� int
	cout << *p << " " << ret << endl;

	vector<int> v = { 1,2,3,4,5 };
	vector<int>::iterator it;
	for (it = v.begin();it != v.end();it++)
		cout << *it << " ";
	cout << endl;
	// auto �� ����Ͽ� ������ ������ ����ȭ
	for (auto it = v.begin();it != v.end();it++)
		cout << *it << " "; //1,2,3,4,5 ���
}