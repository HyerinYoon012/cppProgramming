#include <iostream>
using namespace std;

class Comparable { // 추상 클래스
public:
	virtual bool operator > (Comparable& op2) = 0; // 순수 가상 함수
	virtual bool operator < (Comparable& op2) = 0;
	virtual bool operator == (Comparable& op2) = 0;
	virtual int getRadius() const = 0;
};

class Circle : public Comparable {  // 추상 클래스 상속받음
	int radius;
public:
	Circle(int radius = 1) { this->radius = radius; }
	int getRadius() const override { return radius; }

	bool operator > (Comparable & op2) override {  // 업캐스팅(다형성은 업캐스팅 + virtual이 발생함)
		return this->radius > op2.getRadius();
	}
	bool operator < (Comparable& op2) override {
		return this->radius < op2.getRadius();
	}
	bool operator == (Comparable& op2) override {
		return this->radius == op2.getRadius();
	}

};

template <class T>
T bigger(T a, T b) {
	if (a > b)return a; // a>b에서 a(객체의 클래스)안의 operator> 멤버함수를 찾고 있으면 a.operator>(b)로 변환, 없으면 전역함수 operator>(a,b)를 찾음
	// 멤버 연산자를 먼저 클래스 멤버 연산자를 찾고 없으면 전역 연산자 함수를 찾는다
	else return b;
}

int main() {
	int a = 20, b = 50, c;
	c = bigger(a, b);
	cout << "20과 50중 큰 값은 " << c << endl;
	Circle waffle(10), pizza(20), y;
	y = bigger(waffle, pizza);
	cout << "waffle과 pizza 중 큰 것의 반지름은 " << y.getRadius() << endl;
}
