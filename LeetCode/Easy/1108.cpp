#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string defangIPaddr(string address) {
        string s = "";
        for(int i=0;i<address.length();i++)
        {
            if(address[i]=='.')
                s+="[.]";
            else
                s+=address[i];
        }
        return s;
    }
};
int main()
{
  string address;
  scanf("%s",address);
  Solution ob = new Solution();
  printf("%s\n",ob.defangIPaddr(address));
  return 0;
}
