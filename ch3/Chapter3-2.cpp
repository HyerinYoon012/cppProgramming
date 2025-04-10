# include <iostream>
# include <string>
using namespace std;

class Date {
	int year, month, day;
	string strYMD;
	string date;

public:
	Date(const string Date) {
		int index = 0;
		date = Date;
		int indexYear = Date.find('/', index) ;  //4 - month�� �����ּ�
		index += (indexYear+1);
		int indexMonth = Date.find('/', index)-1;  //5 - day�� �����ּ�


		date.erase(indexYear, 1);
		date.erase(indexMonth, 1);

		int len = date.length();
		int Y = len - indexYear;
		int M = len - indexMonth;

		int YMD = stoi(date); //1945815

		int YMDYear = YMD / (int)pow(10, Y);
		int YMDMonth = (YMD % (int)pow(10, Y)) / (int)pow(10,M);
		int YMDday = (YMD % (int)pow(10, Y)) % (int)pow(10,M);

		strYMD = to_string(YMDYear) + "��" + to_string(YMDMonth) + "��" + to_string(YMDday) + "��\n";
	}

	Date(int year, int month, int day) {
		this->year = year;
		this->month = month;
		this->day = day;
	}
	
	void show() {
		cout << strYMD;
		return;
	}

	int getYear() {
		return year;
	}
	int getMonth() {
		return month;
	}
	int getDay() {
		return day;
	}
};

int main() {
	Date birth(2014, 3, 20);
	Date independenceDay("1945/8/15");
	independenceDay.show();
	cout << birth.getYear() << ',' << birth.getMonth() << ',' << birth.getDay() << endl;
}
