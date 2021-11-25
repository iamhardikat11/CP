#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int count = 0;
        for(int i=0;i<jewels.length();i++)
        {
            for(int j=0;j<stones.length();j++)
                if(jewels[i]==stones[j])
                    count++;
        }
        return count;
        
    }
};
int main()
{
  string jewels,stones;
  scanf("%s %s",jewels,stones);
  Solution ob = new Solution();
  printf("%d\n",ob.numJewelsInStones(jewels,stones));
}
