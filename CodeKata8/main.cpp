#include <iostream>


using namespace std;

int solution(int angle) {
	if (angle < 90) {
		return 1;
	}
	else if (angle == 90) {
		return 2;
	}
	else if (angle < 180) {
		return 3;
	}
	else {
		return 4;
	}
	

}


int main() {
	int num1;
	cout << "원하시는 각도를 정수로 입력해주세요." << endl;
	cin >> num1;
	while (true) {
		if (num1 < 0) {
			cout << "입력한 정수가 너무 작습니다. 1 이상의 정수를 입력해주세요." << endl;
			cin >> num1;
		}
		else {
			if (num1 > 180) {
				cout << "입력한 정수가 너무 큽니다. 180 이하의 정수를 입력해주세요." << endl;
				cin >> num1;
			}
			else {
				break;
			}
		}
	}
	cout << "입력한 각: " << num1 << ", 각도의 타입: " << solution(num1) << endl;


	return 0;
}