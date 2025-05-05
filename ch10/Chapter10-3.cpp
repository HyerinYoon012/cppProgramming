#include <iostream>
using namespace std;

template <class T> void reverseArray(T arry[], int a) {
	T tmp = 0;
	a--;
	for (int i = 0; i < a; i++) {
		tmp = arry[i];
		arry[i] = arry[a];
		arry[a] = tmp;
		a--;
	}
}

int main() {
	int x[] = { 1, 10, 100, 5, 4 };
	reverseArray(x, 5);
	for (int i = 0; i < 5; i++) cout << x[i] << ' ';
}
