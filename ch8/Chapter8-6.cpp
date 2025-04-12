#include<iostream>
#include<vector>
using namespace std;

class BaseArray {
	vector<int> arr;
protected:
	BaseArray(int x) {
		arr.reserve(x);
	}
	int p() {
		int x = arr.back();
		arr.pop_back();
		return x;
	}
	int ca() {
		return arr.capacity();
	}
	int len() {
		return arr.size();
	}
	void pu(int& n) {
		arr.push_back(n);
	}
};

class MyStack : private BaseArray {
public:
	MyStack(int x) : BaseArray(x) {}
	void push(int& n) {
		pu(n);
	}
	int length() {
		return len();
	}
	int pop() {
		int x = p();
		return x;
	}
	int capacity() {
		return ca();
	}
};

int main() {
	MyStack mStack(100);
	int n;
	cout << "스택에 삽입할 5개의 정수를 입력하라>> ";
	for (int i = 0; i < 5; i++) {
		cin >> n;
		mStack.push(n);
	}
	cout << "스택용량:" << mStack.capacity() << ", 스택크기:" << mStack.length() << endl;
	cout << "스택의 모든 원소를 팝하여 출력한다>> ";
	while (mStack.length() != 0) {
		cout << mStack.pop() << ' ';
	}
	cout << endl << "스택의 현재 크기 : " << mStack.length() << endl;
}
