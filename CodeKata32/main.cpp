#include <vector>

using namespace std;

int solution(const vector<int>& a,const vector<int>& b)
{
	int answer = 0;
	for (size_t i = 0; i < a.size(); i++)
	{
		answer += a[i] * b[i];
	}
	
	return answer;
}