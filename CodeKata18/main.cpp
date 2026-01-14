#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int solution(string s) {
	int answer = 0;
	for (int i = s.length()-1; i >= 0; i--) {
		if (s[i] == '+') {
			answer *= 1;
		}
		else if (s[i] == '-') {
			answer *= -1;
		}
		else {
			answer += pow(10,(s.length()-1)-i) * (s[i]-'0');
		}
	}
	return answer;
}


int main() {
	string str;
	cout << "최대 다섯자리의 숫자를 입력해주세요.(+,- 부호 포함 5자리)" << endl;
	while (true) {
	getline(cin, str);
	if (cin.fail()) {
		cin.clear();
		cin.ignore(10000, '\n');
		continue;
	}
	if (str.length() > 5) {
		cout << "너무 큰 숫자를 입력했습니다. 5자리 이하의 숫자를 입력해주세요." << endl;
	}
	else if (str.length() < 1) {
		cout << "너무 작은 숫자를 입력했습니다. 1자리 이상의 숫자를 입력해주세요." << endl;
	}
	else {
		break;
	}
	}
	cout << solution(str) << endl;


	return 0;
}