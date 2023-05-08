//참조에 의한 호출 연습 및
//참조 매게 변수로 평균 리턴

#include <iostream>
using namespace std;

void swap(int& a, int& b) {
	int tmp;
	tmp = a;
	a = b; //참조 변수는 보통변수와 동일한 방식으로 사용
	b = tmp;
}

bool average(int a[], int size, int& avg) {
	if (size <= 0) {
		return false;
	}
	int sum = 0;
	for (int i = 0;i < size;i++) {
		sum += a[i];
	}
	avg = sum / size;//참조 매개 변수를 통해 평균값 전달
	return true;
}

int main() {
	int m = 2, n = 9;
	swap(m, n);
	cout << m << ' ' << n << endl;

	int x[] = { 0,1,2,3,4,5 };
	int avg;
	if (average(x, 6, avg)) {
		cout << "평균은 " << avg << endl;
	}
	else {
		cout << "매개 변수 오류" << endl;
	}
	if (average(x, 4, avg)) {
		cout << "평균은 " << avg << endl;
	}
	else {
		cout << "매개 변수 오류" << endl;
	}
	if (average(x, -2, avg)) {
		cout << "평균은 " << avg << endl;
	}
	else {
		cout << "매개 변수 오류" << endl;
	}

}