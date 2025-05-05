#include <iostream>
#include <vector>
using namespace std;

template <class T> bool equalArrays(T x[], T y[], int a) {
	for (int i = 0; i < a; i++) {
		if (x[i] != y[i]) return false;
	}
	return true;
}

int main() {
	int x[] = { 1,10,100,5,4 };
	int y[] = { 1,10,100,5,4 };
	if (equalArrays(x, y, 5)) cout << "같다"; // 배열 x, y가 같으므로 "같다" 출력
	else cout << "다르다";
}
