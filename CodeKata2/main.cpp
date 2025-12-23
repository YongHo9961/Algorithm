#include <iostream>

using namespace std;


int solution(const int num1,const int num2) {
	return num1 * num2;
}


int main() {

	cout << "두 정수를 입력해주세요." << endl;
	cout << "> ";
	int num1, num2;
	cin >> num1 >> num2;
	while (true) {
		if (num1 < 0 || num2 < 0) {
			cout << "너무 작은 숫자를 입력했습니다. 0 이상의 정수를 입력해주세요." << endl;
			cout << "> ";
			cin >> num1 >> num2;
		}
		else {
			if (num1 > 100 || num2 > 100) {
				cout << "너무 큰 숫자를 입력했습니다. 100 이하의 정수를 입력해주세요." << endl;
				cout << "> ";
				cin >> num1 >> num2;
				
			}
			else {
				break;
			}
		}
	}
	
	cout << num1 << "과 " << num2 << "를 곱한 값은 " << solution(num1, num2) << "입니다." << endl;


	return 0;
}
