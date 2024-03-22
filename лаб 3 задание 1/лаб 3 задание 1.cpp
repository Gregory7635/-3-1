#include <iostream>
using namespace std;
class Time {
private:
	int minute = 0;
	int second = 0;
public:
	void get() {
		cin >> minute;
		cin >> second;
	}
	void print() {
		int minute1 = 60 * minute;
		cout << "общее количество секунд " << minute1 + second;
	}


};
int main() {
	Time time;
	setlocale(LC_ALL, "RU");
	cout << "Введите количество минут и секунд" << endl;
	time.get();
	time.print();
}