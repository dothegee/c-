#include <iostream>
// cout�� << ������ ����
#include<cstring>
#include<string>
using namespace std;

//C++���α׷��� main()�Լ��������� ������ �Ѵ�.
int main() {
	cout << "Hello\n";
	
	cout << "ù��° �������Դϴ�.\n\n\n" << endl;
	//return 0;//main()�Լ��� �����ϸ� ���α׷��� �����
	//�ʿ信 ���� 0�� �ƴ� �ٸ� ���� ������ �� ����.
	// 
	// 
	// return ���� ����



	//���� 2-3
	cout << "���� 2-3\n";

	cout << "�ʺ� �Է��ϼ��� >> ";

	int width;
	cin >> width;

	cout << "���̸� �Է��ϼ��� >> ";
	int height;
	cin >> height;

	int area = width * height;

	cout << "������ " << area << "\n\n\n";

	//���� 2-4
	cout << "���� 2-4\n";

	cout << "�̸��� �Է��ϼ��� >>";

	char name[11];
	cin >> name;
	cout << "�̸���" << name << "�Դϴ�\n\n\n";

	//���� 2-5
	cout << "���� 2-5\n";
	char password[11];
	cout << "���α׷��� �����Ϸ��� ��ȣ�� �Է��ϼ���." << endl;

	while (true) {
		cout << "��ȣ>>";
		cin >> password;

		// �ּ� ����Ű ctrl+k,c
		//strcmp
		//-�Ű������� ���� �ΰ��� ���ڿ��� �� �Ͽ� ���ڿ��� ������ ���ٸ� 0�� ��ȯ�ϰ�, �ٸ��� ���� Ȥ�� ����� ��ȯ�ϴ� �Լ��Դϴ�.

		//	- ���⼭ - 1, 1�� �Ű������� ���� ���ڿ����� ���ϴٰ� �ٸ� ���ڰ� �������� �� ������ �ƽ�Ű �ڵ� ���� ���ؼ� �������ϴ�.

		//	(1) str1 < str2 �� ��쿡�� ���� ��ȯ

		//	(2) str1 > str2 �� ��쿡�� ��� ��ȯ

		//	(3) str1 == str2 �� ��쿡�� 0�� ��ȯ �մϴ�.
		if (strcmp(password, "C++") == 0) {
			cout << "���α׷��� ���� �����մϴ�.\n\n\n" << endl;
			break;
		}
		else
			cout << "��ȣ�� Ʋ���ϴ�" << endl;
	}


	//���� 2-6
	cout << "���� 2-6\n";
	// cin.getline()�� �̿��Ͽ� ������ ���Ե� ���ڿ� �Է�

	// cin.getline(char buf[],int size, char delimitChar)
	//buf : Ű����κ��� ���� ���ڿ��� ������ �迭
	//size : buf[]�迭�� ũ��
	//delimitChar : ���ڿ� �Է� ���� �����ϴ� ���й���

	cout << "�ּҸ� �Է��ϼ��� >>";
	char address[100];
	cin.getline(address, 100, '\n');

	cout << "�ּҴ�" << address << "�Դϴ�\n\n\n";

	//���� 2-7
	cout << "���� 2-7\n";

	//getline(�Է� ��Ʈ��, string ��ü, ������)
	string song("Falling in love with you");
	string elvis("Elvis Presley");
	string singer;

	cout << song + "�� �θ� ������?";
	cout << "(��Ʈ : ù���ڴ� " << elvis[0] << ")?";

	getline(cin, singer);
	if (singer == elvis)
		cout << "�½��ϴ�.\n\n";
	else
		cout << "Ʋ�Ƚ��ϴ�. " + elvis + "�Դϴ�." << endl;

}