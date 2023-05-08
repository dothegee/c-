#include <iostream>
using namespace std;
//////////////////big() 함수 중복
int big(int a, int b) {
	if (a > b) {
		return a;
	}
	else {
		return b;
	}
}
int big(int a[], int size) {
	int res = a[0];
	for (int i = 1;i < size;i++) {
		if (res < a[i]) {
			res = a[i];
		}
	}
	return res;
}
////////////////sum() 함수 중복
int sum(int a, int b) {
	int s = 0;
	for (int i = a;i <= b;i++) {
		s += i;
	}
	return s;
}
int sum(int a) {
	int s = 0;
	for (int i = 0;i <= a;i++) {
		s += i;
	}
	return s;
}

int main() {
	int array[5] = { 1,9,-2,8,6 };
	cout << big(2, 3) << endl;
	cout << big(array, 5) << endl;

	cout << sum(3, 5) << endl;
	cout << sum(3) << endl;
	cout << sum(100) << endl;
}