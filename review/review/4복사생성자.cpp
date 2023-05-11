// 복사 생성할 때는?
// 객체가 함수에 인수로 전달
// 함수가 객체를 반환값 할때
// 새로운 객체를 같은 클래스 타입 기존 객체와 동일하게 초기화

// 얕은 복사의 문제점
// 클래스가 포인터 멤버 변수를 가지고 있는 경우 원본 객체의 포인터 멤버 변수가 사본 객체의 포인터 멤버 변수에 복사되면
// 이 둘은 같은 메모리를 가르키게 되어 문제 야기
// -->> 다른 메모리를 사용하게 복사를 해야됨
// -->> 깊은 복사를 이용


// 5-11 예제 코드
#define _CRT_SECURE_NO_WARNINGS 
// strcpy()로 인한 오류를 막기 위한 코드
#include<iostream>
#include<cstring>
using namespace std;
class Person {
	char* name; //동적할당을 위함
	int id;
public:
	//////////////////////const 쓰는 이유!!!!!!!!!!!!!!
	//char* 은 문자열 상수를 가리키지 못하고, const char* 은 문자열 상수를 가리키지만 그 주소에 다른 값을 씌울 수는 없다.결국 둘 다 메모리에 있는 임시 문자열 상수에 대한 변화는 불가능하다는 것이다
	//	따라서 읽기 전용인 const char* 자료형을 함수 매개변수로 문자열을 넘길 때 많이 사용하게 된다
	// https://noel-embedded.tistory.com/1171 참고
	Person(int id, const char* name); 
	Person(const Person& person); 
	~Person();
	void changeName(const char* name);
	void show() {
		cout << id << ',' << name << endl;
	}
};
Person::Person(int id, const char* name) {
	this->id = id;
	int len = strlen(name); 
	this->name = new char[len + 1]; 
	strcpy(this->name, name); 
}
// if 복사 생성자가 없다면, 디폴트 복사 생성자 자동 삽입
//Person::Person(const Person& p) {
//	this->id = p.id;
//	this->name = p.name;
//}

// 깊은 복사 생성자!!!!!!!!
Person::Person(const Person& person) {
	this->id = person.id; //id 값 복사
	int len = strlen(person.name); //name 문자 개수
	this->name = new char[len + 1]; // name을 위한 공간 할당
	strcpy(this->name, person.name); // name의 문자열 복사
	cout << "복사 생성자 실행. 원본 객체의 이름 " << this->name << endl;
}
Person::~Person() {
	if (name) {
		delete[]name; 
	}
}
void Person::changeName(const char* name) {
	if (strlen(name) > strlen(this->name))
		return; 
	strcpy(this->name, name);
}
int main() {
	Person father(1, "Kitae"); 
	Person daughter(father); 
	cout << "daughter 객체 생성 직후 -----------" << endl;
	father.show();
	daughter.show();
	daughter.changeName("Grace"); 
	cout << "daughter 이름을 Grace로 변경한 후 ----------" << endl;
	father.show(); 
	daughter.show(); 
	return 0; 
}
