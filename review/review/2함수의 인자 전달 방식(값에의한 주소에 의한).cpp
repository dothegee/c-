//함수 인자 전달 방식

#include <iostream>
using namespace std;

//값에 의한 호출(call by value)
void swap_value(int a, int b) {
	int tmp;
	tmp = a;
	a = b;
	b = tmp;
}

//주소에 의한 호출(call by address)
void swap_address(int* a, int* b) {
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

int main() {
	int a = 2, b = 9, c = 2, d = 9;
	cout << a << b << endl;
	swap_value(a, b);
	cout << a << b << endl;
	cout << c << d << endl;
	swap_address(&c, &d);
	cout << c << d << endl;
}