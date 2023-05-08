#include<iostream>
using namespace std;

class Rectangle {
	int x, y;
public:
	Rectangle();
	Rectangle(int a, int b);
	Rectangle(int c);
	bool isSquare();
};

bool Rectangle::isSquare() {
	if (x == y)
		return true;
	else
		return false;
}

Rectangle::Rectangle():Rectangle(1){}
Rectangle::Rectangle(int a, int b) {
	x = a;
	y = b;
}
Rectangle::Rectangle(int c) {
	x = y = c;
}


int main() {
	Rectangle rect1;
	Rectangle rect2(3, 5);
	Rectangle rect3(3);

	if (rect1.isSquare())
		cout << "rect1�� ���簢���̴�." << endl;
	if (rect2.isSquare())
		cout << "rect2�� ���簢���̴�. " << endl;
	if (rect3.isSquare())
		cout << "rect3�� ���簢���̴�. " << endl;
}

