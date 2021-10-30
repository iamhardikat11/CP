//Link:-https://open.kattis.com/problems/sevenwonders
#include <bits/stdc++.h>
#include <string>
#include <cmath>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    int freq[3]={0};
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='T')
         freq[0]++;
        if(s[i]=='G')
         freq[1]++;
        if(s[i]=='C')
         freq[2]++;
    }
    int sum=pow(freq[0],2)+pow(freq[1],2)+pow(freq[2],2);
    sort(freq,freq+3);
    sum+=freq[0]*7;
    cout<<sum;
    return 0;
}
