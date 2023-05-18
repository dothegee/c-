// STL 알고리즘 사용하기
// STL 알고리즘은 전역함수로서, STL 컨테이너 클래스의 멤버 함수가 아니며 템플릿으로 작성되어 있다.
// STL알고리즘 함수는 iterator와 함께 작동
// sort() 함수는 두개의 매개 변수를 가지고 있다. 
// 첫번째 매개 변수에 정렬을 시작할 원소에 대한 iterator 주소를
// 두번째 매개변수느 마지막 원소 다음의 iterator 주소를 주어야함
//

// sort() 함수를 이용한 vector 소팅

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	vector<int> v;// 정수 벡터 생성

	cout << "5개의 정수를 입력하세요>> ";
	for (int i = 0;i < 5;i++) {
		int n;
		cin >> n;
		v.push_back(n); // 키보드에서 읽은 정수를 벡터에 삽입
	}

	// v.begin()에서 v.end() 사이의 값을 오름차순으로 정렬
	// sort() 함수의 실행 결과 벡터 v의 원소 순서가 변경됨
	sort(v.begin(), v.end()); //벡터 소팅

	vector<int>::iterator it; // 벡터 내의 원소를 탐색하는 iterator 변수 선언

	for (it = v.begin();it != v.end();it++) // 벡터 v의 모든 원소 출력
		cout << *it << ' ';
	cout << endl;
}