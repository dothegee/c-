//vector �����̳� Ȱ��
#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> v; //������ ���� ������ ���� ����

	v.push_back(1);//���Ϳ� ���� 1 ����
	v.push_back(2);//���Ϳ� ���� 2 ����
	v.push_back(3);//���Ϳ� ���� 3 ����

	for (int i = 0;i < v.size();i++)
		cout << v[i] << " ";//v[i]�� ������ i ��° ����
	cout << endl;

	v[0] = 10;//������ ù��° ���Ҹ� 10���� ����
	int m = v[2];//m�� 3����
	v.at(2) = 5;//������ 3��° ���Ҹ� 5�� ����

	for (int i = 0;i < v.size();i++)
		cout << v[i] << ' ';
	cout << endl;
}