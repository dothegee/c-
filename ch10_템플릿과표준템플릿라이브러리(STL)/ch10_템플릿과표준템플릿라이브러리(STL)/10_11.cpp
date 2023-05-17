//iterator�� �����̳� �ȿ� �ִ� ���ҵ餷�� �ϳ��� ���������� �����ϱ� ���� ���ҿ� ���� ������
// vector<int>::iterator it;
// it ������ int ���� ���ҷ� ������ ������ ���Ҹ� ����Ű�� ������
// ���� it�� � ���ҵ� ����Ű�� ���� �ʴ�.
// vector<int> v;
// it = v.begin(); // v�� ù ��° ���ҿ� ���� �ּҸ� it�� �����Ѵ�.
// it++; //������ ���� ���Ҹ� ����Ŵ
// int n = *it;// it�� ����Ű�� ������ ���� n�� �о�´�.
// *it = 5; // it�� ����Ű�� ���ҿ� 5�� ����.
//
//iterator �� �̿��Ͽ� vector�� ��� ���ҵ鿡 2���ϱ�

#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> v; // ���� ���� ����
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);

	vector<int>::iterator it;// ���� v�� ���ҿ� ���� ������ it ����

	for (it = v.begin();it != v.end();it++) {
		int n = *it;
		n = n * 2;
		*it = n;
	}

	for (it = v.begin();it != v.end(); it++)
		cout << *it << ' ';
	cout << endl;
}