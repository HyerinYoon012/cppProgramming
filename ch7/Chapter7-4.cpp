#include<iostream>
#include <string>
using namespace std;

class Book {
	string name;
public:
	Book(string name, int a, int b) {
		this->name = name;
	}
	string getTile() {
		return name;
	}
	friend bool operator <(string q, Book w);
};

bool operator <(string q, Book w) {
	return q < w.getTile();
}

int main() {
	Book a("청춘", 20000, 300);
	string b;
	cout << "책 이름을 입력하세요>>";
	getline(cin, b);
	if (b < a)
		cout << a.getTile() << "이" << b << "보다 뒤에 있구나!" << endl;
}

