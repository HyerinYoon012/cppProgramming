#include <iostream>
#include <string>
using namespace std;

class Person {
	string name;
	string tel;
public:
	Person(string& nt) {
		int index = nt.find(' ');
		int len = nt.length();
		for (int i = 0; i < index; i++) {
			name.append(1, nt[i]);
		}
		nt.erase(0, index + 1);
		tel = nt;
	};

	string getName() { return name; }

	string getTel() { return tel; }
};

int main() {
	string N;
	cout << "�̸��� ��ȭ ��ȣ�� �Է��� �ּ���" << endl;

	string nt1;
	string nt2;
	string nt3;

	cout << "��� 1>>";
	getline(cin, nt1);
	cout << "��� 2>>";
	getline(cin, nt2);
	cout << "��� 3>>";
	getline(cin, nt3);

	Person p[3] = { Person(nt1), Person(nt2), Person(nt3) };

	cout << "��� ����� �̸��� " << p[0].getName() << " " << p[1].getName() << " " << p[2].getName() << endl;
	cout << "��ȭ��ȣ �˻��մϴ�. �̸��� �Է��ϼ���>>";
	cin >> N;
	
	for (int i = 0; i < 3; i++) {
		if (N == p[i].getName()) {
			cout << endl << "��ȭ ��ȣ�� " << p[i].getTel();
			break;
		}
	}

	return 0;
}