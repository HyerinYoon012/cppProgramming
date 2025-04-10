#include <iostream>
#include <string>
using namespace std;

class MyVector {
	int* mem;
	int size;
public:
	MyVector(int n = 100, int val = 0);
	~MyVector() { delete[] mem; }
	void print() {
		for (int i = 0; i < size; i++) {
			cout << mem[i] << " ";
		}
		cout << endl;
	}
};

MyVector::MyVector(int n, int val) {
	mem = new int[n];
	size = n;
	for (int i = 0; i < size; i++) mem[i] = val;
}

int main() {
	MyVector a; // 디폴트 매개 변수
	MyVector b(12, 2);  // n = 12, val = 2

	a.print();
	b.print();
}