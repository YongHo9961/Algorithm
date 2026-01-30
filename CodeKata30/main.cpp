#include <string>

using namespace std;

string solution(string s)
{
	string answer;
	// 길이 10 56, 길이 7 4
	if (s.size() % 2 == 0)
	{
		answer += s[(s.size() / 2)-1];
		answer += s[(s.size() / 2)];
	}
	else
	{
		answer += s[(s.size() / 2)];
	}
	return answer;
}