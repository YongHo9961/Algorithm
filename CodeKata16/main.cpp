#include <iostream>
#include <vector>

using namespace std;

vector<long long> solution(int x, int n) {
	vector <long long> answer;
	for (int i = 1; i <= n; i++) {
		answer.push_back(x * i);
	}

	return answer;
}

int main() {
	int num;
	int size;
	cout << "기준이 될 정수를 입력해주세요. " << endl;
	while (true) {
		cin >> num;
			if (num < -10000000) {
				cout << "너무 작은 정수를 입력했습니다. -10000000 이상의 정수를 입력해주세요." << endl;
			}
			else if (num > 10000000) {
				cout << "너무 큰 정수를 입력했습니다. 10000000 이하의 정수를 입력해주세요." << endl;
			}
			else {
				break;
			}
	}
	cout << "몇 번 반복할 지 정수를 입력해주세요. " << endl;
	while (true) {
		cin >> size;
		if (size < 1) {
			cout << "너무 작은 정수를 입력했습니다. 1 이상의 정수를 입력해주세요." << endl;
		}
		else if (size > 1000) {
			cout << "너무 큰 정수를 입력했습니다. 1000 이하의 정수를 입력해주세요." << endl;
		}
		else {
			break;
		}
	}
	vector<long long> result = solution(num, size);
	cout << "기준이 될 정수: " << num << ", 반복할 수: " << size << endl;
	cout << "결과값 [ ";
	for (long long val : result) {
		if (val != result[size - 1]){
			cout << val << ", ";
			}
		else {
			cout << val;
		}
	}
	cout << " ]" << endl;


	return 0;
}