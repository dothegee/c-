// 묵시적복사 생성에 의해 복사 생성자가 자동 호출되는 경우
#define _CRT_SECURE_NO_WARNINGS // strcpy()로 인한 오류를 막기위해 삽입함
#include<iostream>
#include<cstring>
using namespace std;
class Person {
	char* name;
	int id;
public:
	Person(int id, const char* name); //생성자
	Person(const Person& person); // 복사 생성자
	~Person();
	void changeName(const char* name);
	void show() {
		cout << id << ',' << name << endl;
	}
};
Person::Person(int id, const char* name) {
	this->id = id;
	int len = strlen(name); //name의 문자 개수
	this->name = new char[len + 1]; // name 문자열 공간 할당
	strcpy(this->name, name); //name에 문자열 복사
}
// 얕은 복사 생성자 자동 삽입
//Person::Person(const Person& p) {
//	this->id = p.id;
//	this->name = p.name;
//}
////////////////////깊은 복사 생성자////////////////////////////
Person::Person(const Person& person) {
	this->id = person.id; //id 값 복사
	int len = strlen(person.name); // name의 문자 개수
	this->name = new char[len + 1]; //name을 위한 공간 할당
	// daughter의 name에 메모리가 따로 동적 할당되고, father의 name 문자열이 복사되어 같은 문자열 "Kitae"로 초기화
	strcpy(this->name, person.name); // name의 문자열 복사
	cout << "복사 생성자 실행. 원본 객체의 이름 " << this->name << endl;
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

void f(Person person) { // 값에의한 호출로 객체가전달될때 person 객체의 복사 생성자 호출
	person.changeName("dummy");
}
Person g() {
	Person mother(2, "Jane");
	return mother;
	// mother의 복사본을 생성하여 복사본 리턴
	// 사본이 만들어질 때 복사 생성자 호출
}

int main() {
	Person father(1, "Kitae"); 
	Person son = father; // 복사 생성자 호출
	//복사생성자 자동 호출
	// 객체로 초기화하여 객체가 생성될때, son객체의 복사 생성자 호출
	f(father); // 복사 생성자 호출
	g(); //복사 생성자 호출
}