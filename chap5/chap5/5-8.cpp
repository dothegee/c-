//참조리턴

#include<iostream>
using namespace std;

char& find(char s[], int index) {
	return s[index];
}

int main() {
	char name[] = "Mike";
	cout << name << endl;

	find(name, 0) = 'S'; //name[0] = "S"로 바뀜
	cout << name << endl;

	char& ref = find(name, 2); // ref는 name[2]에 대한 참조
	ref = 't';
	cout << name << endl;
}