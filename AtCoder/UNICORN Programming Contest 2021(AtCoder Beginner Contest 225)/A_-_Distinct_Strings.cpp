#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin >> a;
    set<char> s;
    for(char ch: a) s.insert(ch);
    if(s.size()==1) cout << 1 << endl;
    else if(s.size()==2) cout << 3 << endl;
    else cout << 6 << endl;
    return 0;
}