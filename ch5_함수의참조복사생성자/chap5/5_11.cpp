// 깊은 복사 생성자를 가진 정상적인 Person 클래스
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
int main() {
	Person father(1, "Kitae"); // father 객체 생성
	//father 객체가 생성되고, id에 1이 설정 
	// name 포인터에 char[] 배열이 동적으로 할당
	// "Kitae"로 초기화
	Person daughter(father); // daughter 객체 복사 생성. 복사 생성자 호출
	// 복사 생성자 주석 참고
	cout << "daughter 객체 생성 직후 -----------" << endl;
	father.show();
	daughter.show();
	daughter.changeName("Grace"); //daughter 이름 변경
	cout << "daughter 이름을 Grace로 변경한 후----------" << endl;
	father.show(); //father 객체 출력
	daughter.show(); //daughter 객체 출력

	return 0; //daughter,father 객체 소멸
	// daughter의 소멸 뒤 father 객체가 소멸.
	// father 객체의 소멸자 역시 자신의 name에 할당된 메모리를 힙에 반환
	// 5_10에서 발생된 에러는 일어나지 않는다
}