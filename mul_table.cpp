#include <iostream>
#include <string>
using namespace std;

int main() {
	int a;
	cout << "**문채연의 즐거운 구구단 시간**" << endl;
	cout << "몇단이 궁금하신가요 ?" << endl;
	cin >> a;

	for (int c = 1; c < 10; c++)
		cout << a << " * " << c << " = " << a * c << endl;
	cout << endl;

	return 0;
}