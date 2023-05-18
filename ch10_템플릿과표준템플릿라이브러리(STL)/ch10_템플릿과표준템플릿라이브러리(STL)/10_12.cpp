// map�� 'Ű'��'��'�� ���� ���ҷ� �����ϰ� 'Ű'�� �̿��Ͽ� ���� �˻��ϴ� ���׸� �����̳�
// Ű�� ���� �⺻ Ÿ��(int, double ��), Ŭ���� Ÿ�� ��� ����������,
// ������ Ű�� ������ ���Ұ� �ߺ� ����Ǹ� ������ �߻�
// map�� �̿��ϱ� ���ؼ��� ������ ���� <map>��� ���ϰ� using ���þ �ʿ�
// map<string, string> dic; // Ű�� ���� �ܾ�, ���� �ѱ� �ܾ�
// map�� insert() ��� �Լ��� []�����ڸ� ����Ͽ� ������ ���� ���Ҹ� ����
// dic.insert(make_pair("love","���")); // ("love","���") ����
// dic["love"] = "���";// ("love","���") ����
// 
// []�����ڴ� ã�� �� ���� ��� �� ���ڿ�("")�� �����Ѵ�.
// ������ ���� at()�� �̿��Ͽ� �˻��� �� �� ������, at()�� ã�� �� ���� ��� ���ܸ� �߻���Ű�Ƿ� ����ó�� �ڵ带 �ۼ��ؾ� �ϴ� �δ��� �ִ�.
// string kor = dic.at("love"); //kor �� "���" ����
// �ɿ� 'Ű'�� �����Ͱ� �ִ� �� �˻��ϱ� ���ؼ��� ���������� ���� �ڵ带 �̿�
// if(dic.find(eng)==dic.end()) //eng�� 'Ű'�� ã�� �� ���ٸ� ���ǹ��� true
//

//map ���� ���� ���� �����
#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {
	map<string, string> dic; // �� �����̳� ����. Ű�� ���� �ܾ�, ���� �ѱ� �ܾ�

	// �ܾ� 3���� map�� ����

	dic.insert(make_pair("love", "���")); //("love","���") ����
	dic.insert(make_pair("apple", "���")); //("apple","���") ����
	dic["cherry"] = "ü��"; //("cherry","ü��") ����

	cout << "����� �ܾ� ���� " << dic.size() << endl;
	string eng;
	while (true) {
		cout << "ã�� ���� �ܾ� >> ";
		getline(cin, eng); //����ڷκ��� Ű �Է�
		if (eng == "exit")
			break; // "exit"�� �ԷµǸ� ����

		if (dic.find(eng) == dic.end())// eng 'Ű'�� ������ ã�Ҵµ� ����
			cout << "����" << endl;
		else
			cout << dic[eng] << endl;//dic���� eng�� ���� ã�� ���
	}
	cout << "�����մϴ�!!!!!" << endl;
}