#include <iostream>
#include <vector>
using namespace std;

class BaseArray {
protected:
	vector<int> arr;
	BaseArray(int x) {
		arr.reserve(x);  // 용량 확보
	}
	void push(int& n) {
		arr.push_back(n);  // 큐에 요소 추가
	}
	int pop() {
		int popElement = arr.front();
		arr.erase(arr.begin()); // erase()는 인자를 주소를 받아야하므로 front(값 반환) 는 사용 불가, begin(주소 반환)
		return popElement;
	}
	int ca() {
		return arr.capacity();  // 큐의 용량 확인
	}
};

class MyQueue : private BaseArray {
public:
	MyQueue(int x) : BaseArray(x) {};
	void enqueue(int& n) {
		push(n);
	}
	int dequeue() {
		int q = pop();
		return q;
	}
	int length() {
		return arr.size();
	}
	int capacity() {
		return ca();
	}
};

int main() {
	MyQueue mQ(100);
	int n;
	cout << "큐에 삽입할 5개의 정수를 입력하라>> ";
	for (int i = 0; i < 5; i++) {
		cin >> n;
		mQ.enqueue(n);
	}
	cout << "큐의 용량:" << mQ.capacity() << ", 큐의 크기:" << mQ.length() << endl;
	cout << "큐의 원소를 순서대로 제거하여 출력한다>> ";
	while (mQ.length() != 0) {
		cout << mQ.dequeue() << ' ';
	}
	cout << endl << "큐의 현재 크기 : " << mQ.length() << endl;
}
