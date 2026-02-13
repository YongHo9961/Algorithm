#include <vector>

using namespace std;

int solution(int n)
{
  vector<int> temp;
  int answer = 0;
  int multiplier = 1;
  while (n > 0)
  {
    temp.push_back(n % 3);
    n /= 3;

  }
  // 0 0 2 1
  for (int i = temp.size() - 1; i >= 0; i--)
  {
    answer += temp[i] * multiplier;
    multiplier *= 3;
  }

  return answer;
}