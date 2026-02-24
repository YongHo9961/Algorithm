#include <vector>

using namespace std;

int solution(vector<vector<int>> sizes)
{
  int answerindex1 = 0;
  int answerindex2 = 0;
  for (size_t i = 0; i < sizes.size(); i++)
  {
    if (sizes[i][0] < sizes[i][1])
    {
      int temp = sizes[i][0];
      sizes[i][0] = sizes[i][1];
      sizes[i][1] = temp;
    }

    if (answerindex1 < sizes[i][0])
    {
      answerindex1 = sizes[i][0];
    }

    if (answerindex2 < sizes[i][1])
    {
      answerindex2 = sizes[i][1];
    }
   
  }

  return answerindex1 * answerindex2;
}