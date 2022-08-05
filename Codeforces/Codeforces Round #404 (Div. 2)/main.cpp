#include <bits/stdc++.h>
using namespace std;
int solve(string s0, string s1) {
    if(s0.size()==0 || s1.size()==0) return 0;
    map<string,int> m;
    string temp = "";
    for(int i=0;i<s0.size();i++)
    {
        if(s0[i]==' ')
        {
            transform(temp.begin(), temp.end(),temp.begin(), ::tolower);
            m[temp]++;
            temp = "";
        }
        else
        {
            temp.push_back(s0[i]);
        }
    }
    transform(temp.begin(), temp.end(),temp.begin(), ::tolower);
    m[temp]++;
    temp = "";
    map<string,int> n;
    
    for(int i=0;i<s1.size();i++)
    {
        if(s1[i]==' ')
        {
            transform(temp.begin(), temp.end(),temp.begin(), ::tolower);
            n[temp]++;
            temp = "";
        }
        else
        {
            temp.push_back(s1[i]);
        }
    }
    transform(temp.begin(), temp.end(),temp.begin(), ::tolower);
    n[temp]++;
    // for(auto it: n)
    // {
    //     cout << it.first << " " << it.second << endl;
    // }
    int cnt = 0;
    set<string> p;
    for(auto it: m)
    {
        if(n.find(it.first)!=n.end())
        {
            p.insert(it.first);
        }
    }
    // for(auto it: n)
    // {
    //     if(m.find(it.first)==m.end())
    //     {
    //         p.insert(it.first);
    //     }
    // }
    return p.size();
}
int main()
{
    string s0 = "hello world", s1 = "hello World";
    cout << solve(s0,s1) << endl;
    return 0;
}