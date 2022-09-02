#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{

    string a;
    cin >> a;
    map<ll,set<ll>> s;
    for(ll i=0;i<a.size();i++)
        s[a[i]-'a'].insert(i);
    // for(auto it: s)
    // {
    //     cout << it.first << ": " << endl;
    //     for(auto it2: it.second)
    //     {
    //         cout << it2 << " ";
    //     }
    //     cout << endl;
    // }
    char ch = ' ';
    int min_pos = INT_MAX;
    for(auto it: s)
    {
        if(it.second.size()==1)
        {
            if(*it.second.begin()<min_pos)
            {
                min_pos = *it.second.begin();
                ch = it.first;
            }
        }
    }
    if(min_pos==INT_MAX)
    {
        cout << -1 << endl;
        return 0;
    }
    cout << min_pos << endl;
    return 0;
}