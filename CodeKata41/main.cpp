#include <string>
#include <cctype>

using namespace std;

string solution(string s)
{
  int IndexNum = 0;

  for (int i = 0; i < s.size(); i++)
  {
    if (s[i] == ' ')
    {
      IndexNum = 0;
    }
    else
    {
      if (IndexNum % 2 == 0)
      {
        s[i] = toupper(s[i]);
      }
      else
      {
        s[i] = tolower(s[i]);
      }
      IndexNum++;
    }
  }

  return s;
}