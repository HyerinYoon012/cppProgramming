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
	Book a("û��", 20000, 300);
	string b;
	cout << "å �̸��� �Է��ϼ���>>";
	getline(cin, b);
	if (b < a)
		cout << a.getTile() << "��" << b << "���� �ڿ� �ֱ���!" << endl;
}

