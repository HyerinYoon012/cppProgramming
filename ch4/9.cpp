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
	cout << "이름과 전화 번호를 입력해 주세요" << endl;

	string nt1;
	string nt2;
	string nt3;

	cout << "사람 1>>";
	getline(cin, nt1);
	cout << "사람 2>>";
	getline(cin, nt2);
	cout << "사람 3>>";
	getline(cin, nt3);

	Person p[3] = { Person(nt1), Person(nt2), Person(nt3) };

	cout << "모든 사람의 이름은 " << p[0].getName() << " " << p[1].getName() << " " << p[2].getName() << endl;
	cout << "전화번호 검색합니다. 이름을 입력하세요>>";
	cin >> N;
	
	for (int i = 0; i < 3; i++) {
		if (N == p[i].getName()) {
			cout << endl << "전화 번호는 " << p[i].getTel();
			break;
		}
	}

	return 0;
}