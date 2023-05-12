////////////////// 추상 클래스///////////////
// 순수 가상 함수란
// 기본 클래스에 작성된 가상함수는 실행할 목적보단
// 파생클래스에서 재정의하여 구현할 함수를 알려주는 인터페이스 역할
// 순수 가상 함수는 함수의 코드가 없고 선언만 있는 가상함수를 일컫는다
// EXAMPLE
// class Shape{
// public:
//     virtual void draw() = 0; }// 순수가상함수 선언
// 추상 클래스의 목적
// 추상 클래스는 인스턴스를 생성할 목적으로 만들지 않고,
// 상속을 위한 기본 클래스로 활용하는 것이 목적
// 순수 가상함수를 통해 파생클래스가 구현할 함수의 원형을 보여주는 인터페이스 역할
// 
// 추상클래스 상속
// 추상클래스를 상속받는 파생 클래스는 자동으로 추상클래스가 된다
// 순수 가상 함수를 그대로 상속받기 때문이다
// 
// 추상클래스 구현
// 패생 클래스에 추상클래스의 순수 가상 함수의 코드를 작성함을 뜻함
// 파생클래스가 온전한 클래스가 되려면
// 상속받은 추상클래스의 모든 순수가상함수를 오버라이딩하여 구현!!


#include <iostream>
using namespace std;

// (1) 추상 클래스 구현 연습

class Calculator1 {//추상클래스
public:
	virtual int add(int a, int b) = 0;//두 정수의 합 리턴
	virtual int subtract(int a, int b) = 0;//두 정수의 차 리턴
	virtual double average(int a[], int size) = 0;//배열 a의 평균 리턴. size는 배열의 크기
};
class GoodCalc :public Calculator1 {
public:
	int add(int a, int b) {
		return a + b;
	}
	int subtract(int a, int b) {
		return a - b;
	}
	double average(int a[], int size) {
		double sum = 0;
		for (int i = 0;i < size;i++)
			sum += a[i];
		return sum / size;
	}
};

// (2) 추상 클래스를 상속받는 파생 클래스 구현 연습//
class Calculator2 { // 추상 클래스
	void input() {
		cout << "정수 2개를 입력하세요 >> ";
		cin >> a >> b;
	}
protected:
	int a, b;
	virtual int calc(int a, int b) = 0; // 순수가상함수구현
public:
	void run() {
		input();
		cout << "계산된 값은 " << calc(a, b) << endl;
	}
};
class Adder :public Calculator2 {
protected:
	virtual int calc(int a, int b) {
		return a + b;
	}
};
class Subtractor :public Calculator2 {
protected:
	virtual int calc(int a, int b) {
		return a - b;
	}
};

int main() {
	//(1)추상 클래스 구현 연습 관련 main 코드
	int a[] = { 1,2,3,4,5 };
	Calculator1* p = new GoodCalc();
	cout << p->add(2, 3) << endl;
	cout << p->subtract(4, 2) << endl;
	cout << p->average(a, 5) << endl;
	delete p;

	//(2)추상클래스를 상속받는 파생 클래스 구현 연습 관련 main 코드
	Adder adder;
	Subtractor sub;
	adder.run();
	sub.run();
}