#include <iostream>

using namespace std;

int solution(int num1, int num2) {
	double Num1 = num1;
	double Num2 = num2;
	int answer = (Num1 / Num2) * 1000;
	return answer;
}


int main() {
	int  num1, num2;

	cout << "정수를 입력해주세요." << endl;
	cin >> num1 >> num2;

	while (true) {
		if (num1 < 0 || num2 < 0) {
			cout << "너무 작은 정수를 입력하였습니다. 1 이상의 정수를 입력해주세요." << endl;
			cin >> num1 >> num2;
		}
		else {
			if (num1 > 100 || num2 > 100) {
				cout << "너무 큰 정수를 입력하였습니다. 100 이하의 정수를 입력해주세요." << endl;
				cin >> num1 >> num2;
			}
			else {
				cout << "정수 입력이 완료되었습니다." << endl;
				break;
			}
		}
	}
	cout << "첫번째 값: " << num1 << ", 2번째 값: " << num2 << ", 계산 값: " << solution(num1, num2);


	return 0;
}