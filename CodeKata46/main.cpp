#include <string>
#include <map>

using namespace std;

int solution(string s)
{
  int answer;
  string temp;
  string StringAnswer;

  map<string, string> dict = 
  {
    {"zero", "0"}, {"one", "1"}, {"two", "2"}, {"three", "3"},
    {"four", "4"}, {"five", "5"}, {"six", "6"}, {"seven", "7"},
    {"eight", "8"}, {"nine", "9"}
  };

  for (char c : s)
  {
    if (isdigit(c))
    {
      StringAnswer += c;
    }
    else
    {
      temp += c;
      if (dict.count(temp))
      {
        StringAnswer += dict[temp];
        temp = "";
      }
    }
  }

  return stoi(StringAnswer);
}