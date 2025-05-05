#include <iostream>
using namespace std;

template <class T> void remove(T src[], int sizeSrc, T minus[], int sizeMinus, T& retSize) {
	retSize = sizeSrc;
	for (int i = 0; i < sizeSrc; i++) {
		for (int j = 0; j < sizeMinus; j++) {
			if (src[i] == minus[j]) {
				for (int k = i; k < sizeSrc-1; k++) {  // 배열 요소 제거
					src[k] = src[k + 1];  // 배열 요소를 한칸씩 땡기기
				}
				retSize--; // 배열 요소 맨 뒤를 제거하기 위해 배열 전체 크기 1 감소 시키기
				i--; // 배열요소를 한칸씩 땡겼으므로 i를 1감소시켜야 다음 i++ 연산으로 정상적으로 다음 요소에 접근함
				break; // src의 배열 요소를 한번만 제거하고 넘어가야하므로
			}
		}
	}

}

int main() {
	int a[] = {1,2,3,4,5};
	int minus[] = {2,6,3,3};
	int sizeSrc = sizeof(a) / sizeof(a[0]);
	int sizeMinus = sizeof(minus) / sizeof(minus[0]);
	int newSize = 0;

	remove(a, sizeSrc, minus, sizeMinus, newSize);
	for (int i = 0; i < newSize; i++) {
		cout << a[i];
	}
}
