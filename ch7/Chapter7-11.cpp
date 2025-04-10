#include<iostream>
#include<string>
#include <vector>
using namespace std;

class Stack {
	vector<int> stack;
public:
	Stack() {
	}
	friend Stack& operator <<(Stack& s, int r);
	friend Stack& operator >>(Stack& s, int& w);
	friend bool operator !(Stack& a);
};

Stack& operator <<(Stack& s, int r) {
	s.stack.push_back(r);
	return s;
}

Stack& operator >>(Stack& s, int& w) {
	w = s.stack.back();
	s.stack.pop_back();
	return s;
}

bool operator !(Stack& a) {
	return a.stack.empty();
}

int main() {
	Stack stack;
	stack << 3 << 5 << 10;
	while (true) {
		if (!stack) break;
		int x;
		stack >> x;
		cout << x << ' ';
	}
	cout << endl;
}
