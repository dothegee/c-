//iterator는 컨테이너 안에 있는 원소들ㅇ르 하나씩 순차적으로 접근하기 위한 원소에 대한 포인터
// vector<int>::iterator it;
// it 변수는 int 값을 원소로 가지는 벡터의 원소를 가리키는 포인터
// 현재 it는 어떤 원소도 가리키고 있지 않다.
// vector<int> v;
// it = v.begin(); // v의 첫 번째 원소에 대한 주소를 it에 저장한다.
// it++; //벡터의 다음 원소를 가리킴
// int n = *it;// it가 가리키는 원소의 값은 n에 읽어온다.
// *it = 5; // it가 가리키는 원소에 5를 쓴다.
//
//iterator 를 이용하여 vector의 모든 원소들에 2곱하기

#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> v; // 정수 벡터 생성
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);

	vector<int>::iterator it;// 벡터 v의 원소에 대한 포인터 it 선언

	for (it = v.begin();it != v.end();it++) {
		int n = *it;
		n = n * 2;
		*it = n;
	}

	for (it = v.begin();it != v.end(); it++)
		cout << *it << ' ';
	cout << endl;
}