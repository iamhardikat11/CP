#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int X = 0;
        for(int i=0;i<operations.size();i++)\
        {
            if(operations[i].compare("++X")==0 || operations[i].compare("X++")==0)
                X++;
            else
                X--;
        }
        return X;
        
    }
};
int main()
{
  int N;
  scanf("%d",&N);
  vector<string> operations;
  string s;
  for(int i=1;i<=N;i++)
  {
    scanf("%s",&s);
    operations.push_back(s);
  }
  Solution ob = new Solution();
  printf("%d\n",ob.finalValueAfterOperations(&operations));
  return 0;
}
