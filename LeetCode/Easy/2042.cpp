#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool areNumbersAscending(string s) {
       string temp = "";
       vector<int> p;
       int last = 0;
       for(int i=0;i<s.size();i++)
       {
           if(s[i]==' ')
           {
               if(temp.size()==0) continue;
               else {
                   p.push_back(stoi(temp));
               }
               temp = "";
           }
           else
           {
               if(s[i]>=48 && s[i]<=57)
                   temp.push_back(s[i]);
           }
       }
        if(temp.size()!=0)
           p.push_back(stoi(temp));
        for(int i=0;i<p.size();i++)
        {
            if(i!=p.size()-1 && p[i]>=p[i+1]) return false;
        }
        return true;
    }
};
int main()
{
    Solution sol;
    string s = "hello world 5 x 5";
    cout<<sol.areNumbersAscending(s)<<endl;
    return 0;
}