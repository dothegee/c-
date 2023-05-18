// map은 '키'와'값'의 쌍을 원소로 저장하고 '키'를 이용하여 값을 검색하는 제네릭 컨테이너
// 키나 값은 기본 타입(int, double 등), 클래스 타입 모두 가능하지만,
// 동일한 키를 가지는 원소가 중복 저장되면 오류가 발생
// map을 이용하기 위해서는 다음과 같이 <map>헤더 파일과 using 지시어가 필요
// map<string, string> dic; // 키는 영어 단어, 값은 한글 단어
// map의 insert() 멤버 함수나 []연산자를 사용하여 다음과 같이 원소를 저장
// dic.insert(make_pair("love","사랑")); // ("love","사랑") 저장
// dic["love"] = "사랑";// ("love","사랑") 저장
// 
// []연산자는 찾을 수 없는 경우 빈 문자열("")을 리턴한다.
// 다음과 같이 at()을 이용하여 검색을 할 수 있지만, at()은 찾을 수 없는 경우 예외를 발생시키므로 예외처리 코드를 작성해야 하는 부담이 있다.
// string kor = dic.at("love"); //kor 은 "사랑" 저장
// 맴에 '키'의 데이터가 있는 지 검사하기 위해서는 전형적으로 다음 코드를 이용
// if(dic.find(eng)==dic.end()) //eng의 '키'를 찾을 수 없다면 조건문은 true
//

//map 으로 영한 사전 만들기
#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {
	map<string, string> dic; // 맵 컨테이너 생성. 키는 영어 단어, 값은 한글 단어

	// 단어 3개를 map에 저장

	dic.insert(make_pair("love", "사랑")); //("love","사랑") 저장
	dic.insert(make_pair("apple", "사과")); //("apple","사과") 저장
	dic["cherry"] = "체리"; //("cherry","체리") 저장

	cout << "저장된 단어 개수 " << dic.size() << endl;
	string eng;
	while (true) {
		cout << "찾고 싶은 단어 >> ";
		getline(cin, eng); //사용자로부터 키 입력
		if (eng == "exit")
			break; // "exit"이 입력되면 종료

		if (dic.find(eng) == dic.end())// eng '키'를 끝까지 찾았는데 없음
			cout << "없음" << endl;
		else
			cout << dic[eng] << endl;//dic에서 eng의 값을 찾아 출력
	}
	cout << "종료합니다!!!!!" << endl;
}