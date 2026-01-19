#include <iostream>

using namespace std;

bool solution(int x)
{	
	int temp = x;
	bool answer = true;
	int sumX = 0;
	while (temp > 0)
	{
		sumX += temp % 10;
		temp /= 10;
	}
	if (x % sumX != 0)
	{
		answer = false;
	}
	return answer;
}

int main()
{
	int num;
	cout << "1 이상 10000 이하의 정수를 입력해주세요." << endl;
	while (true)
	{
		cin >> num;
		if (num < 1)
		{
			cout << "너무 작은 정수를 입력했습니다. 1 이상의 정수를 입력해주세요." << endl;
		}
		else if (num > 10000)
		{
			cout << "너무 큰 정수를 입력했습니다. 10000 이하의 정수를 입력해주세요. " << endl;
		}
		else
		{
			break;
		}
	}
	cout << "입력한 숫자: " << "하샤드 수인가? : " << solution(num) << endl;

	return 0;
}