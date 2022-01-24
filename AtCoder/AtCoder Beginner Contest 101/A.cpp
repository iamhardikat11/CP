#include <bits/stdc++.h>
using namespace std;
int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string a;
    cin >> a;
    int cnt = 0;
    for(int i = 0; i < a.length(); i++)
    {
        if(a.at(i) == '+')  cnt++;
        else    cnt--;
    }
    cout << cnt << endl;
    return 0;
}
