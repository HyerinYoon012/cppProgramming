#include <iostream>
#include <vector>
using namespace std;

template <class T>
int biggest(T& a, int b) {
	int tmp = a[0];
		for (int i = 0; i < b; i++) {
			if (a[i] > tmp) tmp = a[i];
		}
	return tmp;
}

int main() {
	vector<int> v;
	int n;
	while (1) {
		cout << "값을 입력하세요 -1을 입력하면 종료됩니다>>";
		cin >> n;
		if (n == -1) break;
		v.push_back(n);
	}
	cout << biggest(v, v.size()) << endl;
}
