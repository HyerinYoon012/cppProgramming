#include <iostream>
using namespace std;

template <class T> T* concat(T arr1[], int sizea, T arr2[], int sizeb) {
	T* arr = new T[sizea + sizeb];
	for (int i = 0; i < sizea; i++) arr[i] = arr1[i];
	for (int j = 0; j < sizeb; j++)arr[sizea + j] = arr2[j];
	return arr;
}

int main() {
	int a[3] = { 1, 2, 3 };
	int b[2] = { 4, 5 };
	int sizea = sizeof(a) / sizeof(a[0]);
	int sizeb = sizeof(b) / sizeof(b[0]);
	int* arr = concat(a, sizea, b, sizeb);
	for (int i = 0; i < sizea + sizeb ; i++) {
		cout << arr[i];
	}
}
