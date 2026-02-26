#include <string>

using namespace std;

string solution(string s, int n)
{
  for (size_t i = 0; i < s.size(); i++)
  {
    if (s[i] == ' ')
    {

    }
    else
    {
      if (s[i] < 'a')
      {
        char temp = s[i] - 'A';
        temp += n;
        temp = temp % 26;
        temp += 'A';
        s[i] = temp;
      }
      else
      {
        char temp = s[i] - 'a';
        temp += n;
        temp = temp % 26;
        temp += 'a';
        s[i] = temp;
      }
    }
  }

  return s;
}