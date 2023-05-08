//얕은 복사 생성자를 사용하여 프로그램이 비정상 종료되는 경우
#define _CRT_SECURE_NO_WARNINGS // strcpy()로 인한 오류를 막기위해 삽입함
#include<iostream>
#include<cstring>
using namespace std;
class Person {
	char* name;
	int id;
public:
	Person(int id, const char* name);
	~Person();
	void changeName(const char* name);
	void show() {
		cout << id << ',' << name << endl;
	}
};
// 디폴트 복사 생성자 자동 삽입
//Person::Person(const Person& p) {
//	this->id = p.id;
//	this->name = p.name;
//}

Person::Person(int id, const char* name) {
	this->id = id;
	int len = strlen(name); //name의 문자 개수
	this->name = new char[len + 1]; // name 문자열 공간 할당
	strcpy(this->name, name); //name에 문자열 복사
}
Person::~Person() {
	if (name) {//만일 name에 동적 할당된 배열이 있으면
		delete[]name; // 동적 할당 메모리 소멸
	}
}
void Person::changeName(const char* name) {
	if (strlen(name) > strlen(this->name))
		return; //현재 name에 할당된 메모리보다 긴 이름으로 바꿀 수 없다.
	strcpy(this->name, name);
}
int main() {
	Person father(1, "Kitae"); // father 객체 생성
	//father 객체가 생성되고, id에 1이 설정 
	// name 포인터에 char[] 배열이 동적으로 할당
	// "Kitae"로 초기화
	Person daughter(father); // daughter 객체 복사 생성. 복사 생성자 호출
	// daughter객체를 생성하고 컴파일러가 디폴트 복사 생성자 Person(Person& p)를 호출
	// daughter의 name포인ㅌ어에는 father의 name포인터가복사되어 father가 할당받은 메모리를 함께가리킨다
	cout << "daughter 객체 생성 직후 -----------" << endl;
	father.show();
	daughter.show();
	daughter.changeName("Grace"); //daughter 이름 변경
	cout << "daughter 이름을 Grace로 변경한 후----------" << endl;
	father.show(); //father 객체 출력
	daughter.show(); //daughter 객체 출력

	return 0; //daughter,father 객체 소멸
	// return 0;문이 실행되면 daughter객체가 먼저 소멸
	// 소멸자에 의해 name에 할당된 메모리를 힙에 반환
	// father객체의 소멸자가 name에 할당된 메모리를 힙에 반환.
	// 그러나 daughter가 소멸될 때 이미 반환한 메모리를 다시 반환하게 되므로
	// 오류가 발생하고 프로그램이 비정상 종료된다!!!!!!!!!!!
}