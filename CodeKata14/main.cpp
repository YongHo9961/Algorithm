#include <iostream>


using namespace std;

int solution(const int n) {
	int answer = 0;
	for (int i = 1; i <= n; i++) {
		if (n % i == 0) {
			answer += i;
		}
	}
	return answer;
}

int main() {
	int num;
	cout << "0 이상 3000 이하의 정수릅 입력해주세요." << endl;
	while (true) {
		cin >> num;
		if (num < 0) {
			cout << "너무 작은 정수를 입력했습니다. 0 이상의 정수를 입력해주세요." << endl;
		}
		else if (num > 3000) {
			cout << "너무 큰 정수를 입력했습니다. 3000 이하의 정수를 입력해주세요." << endl;
		}
		else {
			break;
		}
	}
	cout << "입력한 정수: " << num << ", 약수의 합: " << solution(num) << endl;

	return 0;
}