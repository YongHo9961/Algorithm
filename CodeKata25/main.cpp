#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr, int divisor)
{
	vector<int> answer;
	for (auto vec : arr)
	{
		if (vec % divisor == 0)
		{
			answer.push_back(vec);
		}
	}

	if (answer.empty())
	{
		answer.push_back(-1);
	}

	sort(answer.begin(), answer.end());
	return answer;
}


