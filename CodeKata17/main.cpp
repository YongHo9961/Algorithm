#include <iostream>
#include <vector>

using namespace std;


vector<int> solution(long long n) {
	vector<int> answer;
	while (n > 0) {
		answer.push_back(n % 10);
		n = n / 10;
	}


	return answer;
}

int main() {
	long long num;
	cout << "10,000,000,000 이하의 자연수를 입력해주세요." << endl;
	while (true) {
		cin >> num;
		if (num > 10000000000) {
			cout << "너무 큰 숫자를 입력했습니다. 10,000,000,000 이하의 자연수를 입력해주세요." << endl;
		}
		else if (num < 1) {
			cout << "너무 작은 숫자를 입력했습니다. 1 이상의 자연수를 입력해주세요." << endl;
		}
		else {
			break;
		}	
	}
	vector<int> result = solution(num);
	cout << "입력한 숫자: " << num;
	cout << " 역순한 값 [ ";
	for (size_t i = 0; i < result.size(); i++) {
		cout << result[i];
		if (i != result.size() - 1) {
			cout << ", ";
		}
	}
	cout << " ]" << endl;
	return 0;
}