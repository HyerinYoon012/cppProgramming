#include <iostream>
#include <vector>
using namespace std;

int main() {
	double n = 0;
	double sum = 0;
	vector<int> v;

	while (1) {
		cout << "정수를 입력하세요(0을 입력하면 종료)>>";
		cin >> n;
		if (n == 0) break;   // 0이면 프로그램 종료
		v.push_back(n);      // n을 vector v에 넣기
		for (int i = 0; i < v.size(); i++) {
			cout << v[i] << " ";     // vector의 요소 보여줌(사용자가 입력했던 정수들 보여주기)
		}
		sum += n;  // 평균을 구하기 위해 입력받은 값 더하기

		cout << endl << "평균 = " << (double)(sum / v.size()) << endl;    // sum을 vector v의 크기로 나눠서 평균을 보여줌
	}
}
