#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int a, int b)
{
  vector<int> answer;
  int gcd;
  
  for (int i = min(a,b); i > 0; i--)
  {
    if (a % i == 0 && b % i == 0)
    {
      answer.push_back(i);
      gcd = i;
      break;
    }
  }
  long long lcm = (a / gcd) * b;
  answer.push_back(lcm);

  return answer;
}