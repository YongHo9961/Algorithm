#include <iostream>

using namespace std;


void Substract(int num1, int num2) {
	cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
}



int main() {
	int num1, num2;
		cout << "두 정수를 입력해주세요." << endl;
		cin >> num1 >> num2;
		while (1) {
			if (num1 < -50000 || num2 < -50000) {
				cout << "너무 작은 정수를 입력하였습니다. -50000 이상의 정수를 입력해주세요." << endl;
				cin >> num1 >> num2;
			}
			else {
				if (num1 > 50000 || num2 > 50000) {
					cout << "너무 큰 정수를 입력하였습니다. 50000 이하의 정수를 입력해주세요." << endl;
					cin >> num1 >> num2;
				}
				else {
					break;
				}
			}
			
		}

	Substract(num1, num2);

	return 0;
}
