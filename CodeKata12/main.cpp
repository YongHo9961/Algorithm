#include <iostream>
#include <vector>

using namespace std;

double solution(const vector<int> arr) {
	double answer = 0;
	for (auto e : arr) {
		answer += e;
	}
	answer = answer / arr.size();
	return answer;
}

int main() {
	vector<int> arr1;
	while (true) {
		if (arr1.size() <= 100) {
			int temp;
			cout << "배열에 넣을 정수를 입력해주세요.(입력을 그만하고 싶으면 10001 입력)" << endl;
			cin >> temp;
			if (cin.fail()) {
				cin.clear();
				cin.ignore(10000, '\n');
				cout << "잘못된 값을 입력하였습니다. 정수를 입력해주세요." << endl;
			}
			else if (temp < -10000) {
				cout << "너무 작은 정수를 입력했습니다. -10000 이상의 정수를 입력해주세요." << endl;
			}
			else if (temp > 10000) {
				if (temp == 10001) {
					break;
				}
				else {
					cout << "너무 큰 정수를 입력했습니다. 10000 이하의 정수를 입력해주세요." << endl;
				}
			}
			else {
				arr1.push_back(temp);
			}
		}
		else {
			break;
		}
	}
	cout << "배열의 평균값은 " << solution(arr1) << endl;

	return 0;
}
