//Link:-https://open.kattis.com/problems/abc
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr;
    for(int i=0;i<3;i++)
    {
        int N;
        cin >> N;
        arr.push_back(N);
    }
    sort(arr.begin(), arr.end());
    string s = ""; 
    cin >> s;
    for(int i=0;i<3;i++)
    {
        cout<< arr[(s[i]-'A')] << " ";
    }

}