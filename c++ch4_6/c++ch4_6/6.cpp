#include <iostream>
#include <string>
using namespace std;

int main() {
	string str;
	string restr;
	int len = 0;

	while (1) {
		cout << "아래에 한 줄을 입력하세요.(exit를 입력하면 종료합니다)" << endl;
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