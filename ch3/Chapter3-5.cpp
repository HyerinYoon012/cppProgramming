#include <iostream>
#include <string>
using namespace std;

class Random {
public:
	Random() {
		return;
	}

	int next() {
		return rand();
	}

	int nextInRange(int start, int end) {
		return rand() % (end - start + 1) + start;
		// rand()%n 은 0~n-1까지 숫자를 랜덤하게 생성
		// 2~17에서 랜덤으로 수를 생성하기 바란다면 2~17을 0~15간격으로 바꾸고(end - start + 1) 최소값인 2를 더하면 됨(+ start)
	}
};

int main() {
	Random r;
	cout << "-- 0에서 " << RAND_MAX << "까지의 랜덤 정수 10 개--" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.next();
		cout << n << ' ';
	}
	cout << endl << endl << "--2에서 " << "4 까지의 랜덤 정수 10 개 --" << endl;
	for (int i = 0; i < 0; i++) {
		int n = r.nextInRange(2, 4);
		cout << n << ' ';
	}
	cout << endl;

	return 0;
}