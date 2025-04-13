#include<iostream>
#include<string>
using namespace std;

class LoopAdder {
public:
	virtual void run() = 0;  // 순수 가상 함수
};

class WhileLoopAdder : public LoopAdder {
	int a, b;
	int sum = 0;
	int i = 0;
	string s;
public:
	WhileLoopAdder(const string& s) {
		this->s = s;
	}
	virtual void run() {
		cout << s << ":" << endl << "처음 수에서 두번째 수까지 더합니다. 두 수를 입력하세요 >> ";
		cin >> a >> b;
		int i = a;
		while (i <= b) {
			sum += i;
			i++;
		}
		cout << a << "에서 " << b << "까지의 합 = " << sum << "입니다" << endl;
	}
};

class DoWhileLoopAdder : public LoopAdder {
	int a, b;
	int sum = 0;
	int i = 0;
	string s;
public:
	DoWhileLoopAdder(const string& s) {
		this->s = s;

	}
	virtual void run() {
		cout << s << ":" << endl << "처음 수에서 두번째 수까지 더합니다. 두 수를 입력하세요 >> ";
		cin >> a >> b;
		int i = a;
		do {
			sum += i;
			i++;
		} while (i <= b);
		cout << a << "에서 " << b << "까지의 합 = " << sum << "입니다" << endl;
	}
};

int main() {
	WhileLoopAdder whileLoop("While Loop");
	DoWhileLoopAdder doWhileLoop("Do while Loop");

	whileLoop.run();
	doWhileLoop.run();
}
