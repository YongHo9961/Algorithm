#include <iostream>

using namespace std;

int solution(const int num1,const int num2) {
	int answer = num1 / num2;
	return answer;
}


int main() {
	int num1, num2;
	cout << "두 개의 정수를 입력해주세요." << endl;
	cout << "> ";
	cin >> num1 >> num2;
	while (true) {
		if (num1 < 0 || num2 < 0) {
			cout << "너무 작은 정수를 입력하였습니다. 1 이상의 정수를 입력해주세요." << endl;
			cout << "> ";
			cin >> num1 >> num2;
		}
		else {
			if (num1 > 100 || num2 > 100) {
				cout << "너무 큰 정수를 입력하였습니다. 100 이하의 정수를 입력해주세요." << endl;
				cout << "> ";
				cin >> num1 >> num2;
			}
			else {
				cout << "두 정수의 입력이 완료되었습니다." << endl;
				break;
			}
		}
	}
	cout << num1 << "을 " << num2 << "로 나눈 몫은 " << solution(num1, num2) << "입니다." << endl;



}