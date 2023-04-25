#include <iostream>
// cout과 << 연산자 포함
#include<cstring>
#include<string>
using namespace std;

//C++프로그램은 main()함수에서부터 실행을 한다.
int main() {
	cout << "Hello\n";
	
	cout << "첫번째 맛보기입니다.\n\n\n" << endl;
	//return 0;//main()함수가 종료하면 프로그램이 종료됨
	//필요에 따라 0이 아닌 다른 값을 리턴할 수 있음.
	// 
	// 
	// return 생략 가능



	//예제 2-3
	cout << "예제 2-3\n";

	cout << "너비를 입력하세요 >> ";

	int width;
	cin >> width;

	cout << "높이를 입력하세요 >> ";
	int height;
	cin >> height;

	int area = width * height;

	cout << "면적은 " << area << "\n\n\n";

	//예제 2-4
	cout << "예제 2-4\n";

	cout << "이름을 입력하세요 >>";

	char name[11];
	cin >> name;
	cout << "이름은" << name << "입니다\n\n\n";

	//예제 2-5
	cout << "예제 2-5\n";
	char password[11];
	cout << "프로그램을 종료하려면 암호를 입력하세요." << endl;

	while (true) {
		cout << "암호>>";
		cin >> password;

		// 주석 단축키 ctrl+k,c
		//strcmp
		//-매개변수로 들어온 두개의 문자열을 비교 하여 문자열이 완전히 같다면 0을 반환하고, 다르면 음수 혹은 양수를 반환하는 함수입니다.

		//	- 여기서 - 1, 1은 매개변수로 들어온 문자열들을 비교하다가 다른 문자가 나왔을때 그 문자의 아스키 코드 값에 의해서 정해집니다.

		//	(1) str1 < str2 인 경우에는 음수 반환

		//	(2) str1 > str2 인 경우에는 양수 반환

		//	(3) str1 == str2 인 경우에는 0을 반환 합니다.
		if (strcmp(password, "C++") == 0) {
			cout << "프로그램을 정상 종료합니다.\n\n\n" << endl;
			break;
		}
		else
			cout << "암호가 틀립니다" << endl;
	}


	//예제 2-6
	cout << "예제 2-6\n";
	// cin.getline()을 이용하여 공백이 포함된 문자열 입력

	// cin.getline(char buf[],int size, char delimitChar)
	//buf : 키보드로부터 읽은 문자열을 저장할 배열
	//size : buf[]배열의 크기
	//delimitChar : 문자열 입력 끝을 지정하는 구분문자

	cout << "주소를 입력하세요 >>";
	char address[100];
	cin.getline(address, 100, '\n');

	cout << "주소는" << address << "입니다\n\n\n";

	//예제 2-7
	cout << "예제 2-7\n";

	//getline(입력 스트림, string 객체, 구분자)
	string song("Falling in love with you");
	string elvis("Elvis Presley");
	string singer;

	cout << song + "를 부른 가수는?";
	cout << "(힌트 : 첫글자는 " << elvis[0] << ")?";

	getline(cin, singer);
	if (singer == elvis)
		cout << "맞습니다.\n\n";
	else
		cout << "틀렸습니다. " + elvis + "입니다." << endl;

}