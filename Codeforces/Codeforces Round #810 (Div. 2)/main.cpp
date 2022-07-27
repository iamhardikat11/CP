#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    map<int,int> m;
    int n;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        string a;
        cin >> a;
        vector<bool> v(26,false);
        for(int j=0;j<a.size();j++)
        {
            v[(int)(a[j]-'a')] = true;
        }
        for(int j=0;j<26;j++)
        {
            if(v[j])
                m[j]++;
        }
    }   
    vector<char> s;
    for(auto it: m)
    {
        if(it.second==n) s.push_back('a'+it.first);
    }
    for(int i=0;i<s.size();i++)
    {
        cout << "[" << s[i] << "]";
    }
    cout << endl;
    return 0;
} 