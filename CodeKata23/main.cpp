#include <iostream>

using namespace std;

int solution(int num)
{
	int answer = 0;
	long long temp = num;
	while (true)
	{
		if (temp == 1)
		{
			break;
		}

		if (answer == 500)
		{
			answer = -1;
			break;
		}

		if (temp % 2 == 0)
		{
			temp /= 2;
			answer += 1;
		}
		else
		{
			temp = (3 * temp) + 1;
			answer += 1;
		}
	}
	return answer;
}

int main()
{
	int num;
	cout << "1 이상 8000000 미만의 정수를 입력해주세요. " << endl;
	while (true)
	{
		cin >> num;

		if (num < 1)
		{
			cout << "너무 작은 정수를 입력했습니다. 1 이상의 정수를 입력해주세요." << endl;
		}
		else if (num >= 8000000)
		{
			cout << "너무 큰 정수를 입력했습니다. 8000000 미만의 정수를 입력해주세요." << endl;
		}
		else
		{
			break;
		}
	}

	cout << "입력한 정수: " << num << ", 콜라츠 추측 결과: " << solution(num) << endl;


	return 0;
}