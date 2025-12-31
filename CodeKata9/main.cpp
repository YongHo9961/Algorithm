#include <iostream>

using namespace std;

int solution(const int n) {
	int sum = 0;
	for (int i = 0; i <= n; i++) {
		if (i % 2 == 0) {
			sum += i;
		}
	}

	return sum;
}



int main() {
	int num;
		
	cout << "정수를 입력해주세요." << endl;
	cin >> num;
	while (true) {
		if (num < 0 || num > 1000) {
			cout << "정수의 값이 범위를 벗어났습니다. 1 이상 1000이하의 정수를 입력해주세요." << endl;
			cin >> num;
		}
		else {
			cout << "정수 입력 완료" << endl;
			break;
		}
	}

	cout << "입력한 정수: " << num << ", 계산 값; " << solution(num) << endl;


	return 0;
}