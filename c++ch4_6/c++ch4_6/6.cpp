#include <iostream>
#include <string>
using namespace std;

int main() {
	string str;
	string restr;
	int len = 0;

	while (1) {
		cout << "�Ʒ��� �� ���� �Է��ϼ���.(exit�� �Է��ϸ� �����մϴ�)" << endl;
		getline(cin,str);
		len = str.length();
		for (int i = 0; i < len ; i++) {
			restr.append(1, str[len - i - 1]);
		}

		cout << restr << endl;

		if (str == "exit") {
			break;
		}
	}
	
	return 0;
}