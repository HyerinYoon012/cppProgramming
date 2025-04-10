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
		// rand()%n �� 0~n-1���� ���ڸ� �����ϰ� ����
		// 2~17���� �������� ���� �����ϱ� �ٶ��ٸ� 2~17�� 0~15�������� �ٲٰ�(end - start + 1) �ּҰ��� 2�� ���ϸ� ��(+ start)
	}
};

int main() {
	Random r;
	cout << "-- 0���� " << RAND_MAX << "������ ���� ���� 10 ��--" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.next();
		cout << n << ' ';
	}
	cout << endl << endl << "--2���� " << "4 ������ ���� ���� 10 �� --" << endl;
	for (int i = 0; i < 0; i++) {
		int n = r.nextInRange(2, 4);
		cout << n << ' ';
	}
	cout << endl;

	return 0;
}