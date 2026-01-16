#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

bool compare(long long a, long long b)
{
	return a > b;
}

long long solution(long long n) 
{
	long long temp = n;
	long long answer = 0;
	vector<long long> arr;
	while (temp > 0)
	{
		arr.push_back(temp % 10);
		temp /= 10;
	}
	sort(arr.begin(), arr.end(),compare);
	for (int i = 0; i < arr.size(); i++)
	{
		answer += arr[i] * pow(10, arr.size() - (i + 1));
	}
	return answer;
}

int main() {
	long long num;
	cout << "1이상 8000000000이하의 자연수를 입력해주세요." << endl;
	while (true)
	{
		cin >> num;
		if (num < 1)
		{
			cout << "숫자가 너무 작습니다. 1 이상의 자연수를 입력해주세요." << endl;
		}
		else if (num > 8000000000)
		{
			cout << "숫자가 너무 큽니다. 8000000000 이하의 자연수를 입력해주세요." << endl;
		}
		else
		{
			break;
		}
	}
	cout << "입력한 값: " << num << ", 정렬된 값: " << solution(num) << endl;

	return 0;
}