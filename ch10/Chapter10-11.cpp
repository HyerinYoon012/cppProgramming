#include <iostream>
#include <vector>
# include<string>
using namespace std;

class Book {
	int year;
	string bn, writer;
public:
	Book(int y, string e, string t) : year(y), bn(e), writer(t) {}  // 초기화 리스트
	string getWriter() { return this->writer; }
	int getYear() { return this->year; }
	void Print() { cout << this->year << "년도, " << this->bn << ", " << this->writer << endl; }  // 입고된 책 정보 출력
};


int main() {
	int year = 0;
	string s, w;
	vector<Book> v;
	cout << "입고할 책을 입력하세요. 년도에 -1을 입력하면 입고를 종료합니다." << endl;

	while (1) {   // 입고
		cout << "년도>>";
		cin >> year;
		cin.ignore(); // 버퍼에 남아 있는 '\n'를 비워줌, cin.ignore() - 버퍼에 남아있는 문자 중 맨앞 문자 1개를 제거

		if (year == -1)break;   // 년도로 -1이 입력되면 입고 입력 종료 다른 메뉴로 넘어감

		cout << "책이름>>";
		getline(cin, s);
		cout << "저자>>";
		getline(cin, w);    // 년도, 책이름, 저자 입력 받음,  책이름, 저자는 한줄로 입력(공백포함 입력 받음)
		v.emplace_back(year, s, w);   // Book클래스 타입의 vector를 만들고 생성자를 호출, emplace_back()은 벡터 안에서 직접 생성자를 호출해서 객체를 만든다.
	}

	//입고 완료
	cout << "총 입고된 책은 " << v.size() << "권입니다." << endl << "검색하고자 하는 저자 이름을 입력하세요>>";
	string g;
	int gg;
	getline(cin, g);
	for (int i = 0; i < v.size(); i++) {
		if (v[i].getWriter() == g) {   // vector v를 순회하며 입력받은 저자 이름과 일치하면 Print()를 이용해서 정보 출력
			v[i].Print();
			break;
		}
	}
	cout << "검색하고자 하는 년도를 입력하세요>>";
	cin >> gg;
	for (int i = 0; i < v.size(); i++) {
		if (v[i].getYear() == gg) {    // vector v를 순회하며 입력받은 년도와 일치하면 Print()를 이용해서 정보 출력
			v[i].Print();
			break;
		}
	}
}
