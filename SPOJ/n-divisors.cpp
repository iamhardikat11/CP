#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string digitSum(string s, int k) {
        string temp="";
        if(s.size()<=k) return s;
        else
        {
            int curr=1;
            int sum=0;
            for(int i=0;i<s.size();i++)
            {
                if(curr<=(k))
                {
                    curr++;
                    sum+=s[i]-'0';
                }
                else
                {
                    // cout << curr << " " << i << " " << sum << endl;
                    temp+=to_string(sum);
                    i--;
                    curr = 1;
                    sum = 0;
                }
            }
            temp+=to_string(sum);
        }
        return digitSum(temp,k);
    }
};
int main()
{
    Solution a;
    string s;
    int k;
    cin >> s >> k;
    cout << a.digitSum(s,k) << endl;
    return 0;
}