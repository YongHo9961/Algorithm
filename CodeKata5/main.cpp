#include <iostream>

using namespace std;

int solution(const int num1, const int num2) {
	int answer = 0;
	if (num1 == num2) {
		answer = 1;
	}
	else {
		answer = -1;
	}
	return answer;
}

int main() {
	int num1, num2;
	cout << "두 정수를 입력해주세요." << endl;
	cout << "> ";
	cin >> num1 >> num2;
	while (true) {
		if (num1 < 0 || num2 < 0) {
			cout << "0 이상의 정수를 입력해주세요." << endl;
			cout << "> ";
			cin >> num1 >> num2;
		}
		else {
			if (num1 > 10000 || num2 > 10000) {
				cout <<"10000이하의 정수를 입력해주세요." << endl;
				cout << "> ";
				cin >> num1 >> num2;
			}
			else {
				cout << "정수 입력을 완료했습니다." << endl;
				break;
			}
		
		}
	}
	cout << "첫번째 정수: " << num1 << ", 두번째 정수: " << num2 << endl;
	cout << "두 수가 같으면 1 다르면 -1: " << solution(num1, num2) << endl;

	return 0;
}