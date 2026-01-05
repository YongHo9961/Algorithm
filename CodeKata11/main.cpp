#include <iostream>
#include <string>

using namespace std;

string solution(int num) {
	if (num % 2 == 0) {
		return "Even";
	}
	else {
		return "Odd";
	}

}

int main() {
	int num;
	cout << "정수 한 개를 입력해주세요." << endl;
	cin >> num;
	while (true) {
		if (cin.fail()) {
			cin.clear();
			cin.ignore(10000, '\n');
			cout << "잘못된 값을 입력했습니다. 정수를 입력해주세요." << endl;
			cin >> num;
		}
		else {
			break;
		}
	}
	cout << "입력한 정수: " << num << ", 정수는 " << solution(num) << "입니다." << endl;

	return 0;
}