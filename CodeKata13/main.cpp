#include <iostream>
#include <string>

using namespace std;

int solution(int n) {
	int answer = 0;
	while (n > 0) {
		answer += n % 10;
		n /= 10;
	}
	
	return answer;
}

int main() {
	int num;
	cout << "1억 이하의 자연수를 입력해주세요." << endl;
	while (true) {
		cin >> num;
		if (num < 1) {
			cout << "너무 작은 수를 입력했습니다. 1 이상의 정수를 입력해주세요." << endl;
		}
		else if (num > 100000000) {
			cout << "너무 큰 수를 입력했습니다. 1억 이하의 자연수를 입력해주세요." << endl;
		}
		else {
			break;
		}
	}
	cout << "입력한 정수: " << num << ", 계산한 값: " << solution(num) << endl;

	return 0;
}