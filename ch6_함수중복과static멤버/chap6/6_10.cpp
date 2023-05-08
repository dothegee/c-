//static ����� ���� Math Ŭ���� �ۼ�
#include <iostream>
using namespace std;
// ��ü������� �߱��ϴ� �ٽ� ��ġ�� ĸ��ȭ
// �����Լ��� ���������� ���� ����Լ��� ������ Ŭ���� �ȿ� ����
// ���������� �����Լ��� ������������ Ŭ������ static����� �����Ͽ� ĸ��ȭ
//
class Math {
public:
	static int abs(int a) {
		return a > 0 ? a : -a;
	}
	static int max(int a, int b) {
		return (a > b) ? a : b;
	}
	// (a > b) ? a : b �� ��
	/*if (a > b)
		return a;
	else
		return b*/
	static int min(int a, int b) {
		return (a > b) ? b : a;
	}
};
int main() {
	cout << Math::abs(-5) << endl;
	cout << Math::max(10, 8) << endl;
	cout << Math::min(-3, -8) << endl;
}