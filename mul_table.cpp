#include <iostream>
#include <string>
using namespace std;

int main() {
	int a;
	cout << "**��ä���� ��ſ� ������ �ð�**" << endl;
	cout << "����� �ñ��ϽŰ��� ?" << endl;
	cin >> a;

	for (int c = 1; c < 10; c++)
		cout << a << " * " << c << " = " << a * c << endl;
	cout << endl;

	return 0;
}