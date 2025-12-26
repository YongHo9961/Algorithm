#include <iostream>

using namespace std;

int solution(const int num1, const int num2) {
	return num1 + num2;
}


int main() {
	int num1, num2;
	cout << "두 정수를 입력해주세요." << endl;
	cin >> num1 >> num2;
	while (true) {
		if (num1 < -50000 || num2 < -50000) {
			cout << "너무 작은 정수를 입력하였습니다. -50000 이상의 정수를 입력해주세요." << endl;
			cin >> num1 >> num2;
		}
		else {
			if (num1 > 50000 || num2 > 50000) {
				cout << "너무 큰 정수를 입력하였습니다. 50000 이하의 정수를 입력해주세요." << endl;
				cin >> num1 >> num2;
			}
			else {
				cout << "정수 입력이 완료되었습니다." << endl;
				break;
			}
		}
	}

	cout << "정수1: " << num1 << ", 정수2: " << num2 << ", 두 수의 합: " << solution(num1, num2) << endl;



	return 0;
}