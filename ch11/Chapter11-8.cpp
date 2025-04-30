#include <iostream>
using namespace std;

class Circle {
	string name;
	int radius;
public:
	Circle(int radius = 1, string name = "") {
		this->radius = radius; this->name = name;
	}

	friend ostream& operator <<(ostream& stream, Circle& a);
	friend istream& operator >>(istream& ins, Circle& a);
};

istream& operator >>(istream& ins, Circle& a) {
	cout << "반지름 >> ";
	ins >> a.radius;
	cout << "이름 >> ";
	ins >> a.name;
	return ins;
}

ostream& operator <<(ostream& stream, Circle& a) {
	stream << "(반지름" << a.radius << "인 " << a.name << ")";
	return stream;
}

int main() {
	Circle d, w;
	cin >> d >> w;
	cout << d << w << endl;
}
