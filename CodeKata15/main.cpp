#include <iostream>


using namespace std;


int solution(int n) {
	int answer = 0;
	for (int i = 1; i < n; i++) {
		if (n % i == 1) {
			answer = i;
			break;
		}
	}
	return answer;
}


int main() {
	int num;
	cout << "3이상 1백만 이하의 자연수를 입력해주세요." << endl;
	while (true) {
		cin >> num;
		if (num < 3) {
			cout << "너무 작은 정수를 입력했습니다. 3 이상의 정수를 입력해주세요." << endl;

		}
		else if (num > 1000000) {
			cout << "너무 큰 정수를 입력했습니다. 1백만 이하의 정수를 입력해주세요." << endl;
		}
		else {
			break;
		}
	}
	cout << "입력한 정수: " << num << ", 나머지가 1인 가장 작은 자연수: " << solution(num) << endl;

	return 0;
}