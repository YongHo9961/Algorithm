#include <iostream>

using namespace std;

long long solution(int a, int b)
{
	long long answer = 0;
	if (a >= b)
	{
		for (int i = b; i <= a; i++)
		{
			answer += i;
		}
	}
	else
	{
		for (int i = a; i <= b; i++)
		{
			answer += i;
		}
	}

	return answer;
}


int main()
{
	int num1, num2;
	cout << "-10,000,000 이상 10,000,000 이하의 정수를 입력해주세요." << endl;
	while (true)
	{
		cin >> num1;
		if (num1 < -10000000)
		{
			cout << "너무 작은 정수를 입력했습니다. -10,000,000 이상의 정수를 입력해주세요." << endl;
		}
		else if (num1 > 10000000)
		{
			cout << "너무 큰 정수를 입력했습니다. 10,000,000 이하의 정수를 입력해주세요." << endl;
		}
		else
		{
			break;
		}
	}
	cout << "-10,000,000 이상 10,000,000 이하의 두번째 정수를 입력해주세요." << endl;
	while (true)
	{
		cin >> num2;
		if (num2 < -10000000)
		{
			cout << "너무 작은 정수를 입력했습니다. -10,000,000 이상의 정수를 입력해주세요." << endl;
		}
		else if (num2 > 10000000)
		{
			cout << "너무 큰 정수를 입력했습니다. 10,000,000 이하의 정수를 입력해주세요." << endl;
		}
		else
		{
			break;
		}
	}

	cout << "입력한 두 수: " << num1 << "," << num2 << " 계산결과: " << solution(num1, num2) << endl;

	return 0;
}