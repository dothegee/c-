// ���������� ������ ���� ���� �����ڰ� �ڵ� ȣ��Ǵ� ���
#define _CRT_SECURE_NO_WARNINGS // strcpy()�� ���� ������ �������� ������
#include<iostream>
#include<cstring>
using namespace std;
class Person {
	char* name;
	int id;
public:
	Person(int id, const char* name); //������
	Person(const Person& person); // ���� ������
	~Person();
	void changeName(const char* name);
	void show() {
		cout << id << ',' << name << endl;
	}
};
Person::Person(int id, const char* name) {
	this->id = id;
	int len = strlen(name); //name�� ���� ����
	this->name = new char[len + 1]; // name ���ڿ� ���� �Ҵ�
	strcpy(this->name, name); //name�� ���ڿ� ����
}
// ���� ���� ������ �ڵ� ����
//Person::Person(const Person& p) {
//	this->id = p.id;
//	this->name = p.name;
//}
////////////////////���� ���� ������////////////////////////////
Person::Person(const Person& person) {
	this->id = person.id; //id �� ����
	int len = strlen(person.name); // name�� ���� ����
	this->name = new char[len + 1]; //name�� ���� ���� �Ҵ�
	// daughter�� name�� �޸𸮰� ���� ���� �Ҵ�ǰ�, father�� name ���ڿ��� ����Ǿ� ���� ���ڿ� "Kitae"�� �ʱ�ȭ
	strcpy(this->name, person.name); // name�� ���ڿ� ����
	cout << "���� ������ ����. ���� ��ü�� �̸� " << this->name << endl;
}
Person::~Person() {
	if (name) {//���� name�� ���� �Ҵ�� �迭�� ������
		delete[]name; // ���� �Ҵ� �޸� �Ҹ�
	}
}
void Person::changeName(const char* name) {
	if (strlen(name) > strlen(this->name))
		return; //���� name�� �Ҵ�� �޸𸮺��� �� �̸����� �ٲ� �� ����.
	strcpy(this->name, name);
}

void f(Person person) { // �������� ȣ��� ��ü�����޵ɶ� person ��ü�� ���� ������ ȣ��
	person.changeName("dummy");
}
Person g() {
	Person mother(2, "Jane");
	return mother;
	// mother�� ���纻�� �����Ͽ� ���纻 ����
	// �纻�� ������� �� ���� ������ ȣ��
}

int main() {
	Person father(1, "Kitae"); 
	Person son = father; // ���� ������ ȣ��
	//��������� �ڵ� ȣ��
	// ��ü�� �ʱ�ȭ�Ͽ� ��ü�� �����ɶ�, son��ü�� ���� ������ ȣ��
	f(father); // ���� ������ ȣ��
	g(); //���� ������ ȣ��
}