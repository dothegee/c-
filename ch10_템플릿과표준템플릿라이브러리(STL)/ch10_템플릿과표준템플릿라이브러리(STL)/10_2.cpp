#include <iostream>
using namespace std;

template<class T>
T bigger(T a, T b) {
	if (a > b)
		return a;
	else
		return b;
}

int main() {
	int a = 20, b = 5;
	char c = 'a', d = 'v';
	cout << bigger(a, b) << endl;
	cout << bigger(c, d) << endl;
}