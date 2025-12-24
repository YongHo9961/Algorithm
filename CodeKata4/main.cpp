#include <iostream>

using namespace std;

int solution(int age) {
	int answer = 2022 - (age - 1);
	return answer;
}

int main() {
	int age;

	cout << "현재 나이를 입력해주세요." << endl;
	cout << "> ";
	cin >> age;
	while (true) {
		if (age < 0) {
			cout << "사람의 나이는 0보다 작을 수 없습니다. 1 이상의 정수를 입력해주세요." << endl;
			cout << "> ";
			cin >> age;
		}
		else {
			if (age > 120) {
				cout << "너무 큰 정수를 입력하였습니다. 120 이하의 정수를 입력해주세요." << endl;
				cout << "> ";
				cin >> age;
			}
			else {
				cout << "나이 입력이 완료되었습니다." << endl;
				break;
			}
		}
	}
	cout << "당신의 나이: " << age << ", 2022년 기준 당신의 출생연도: " << solution(age) << endl;
}