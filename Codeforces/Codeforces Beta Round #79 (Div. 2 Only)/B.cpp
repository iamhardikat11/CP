#include <bits/stdc++.h>
using namespace std;
int solve(string a)
{
    int k;
    while(a.length()!=1)
    {
        int sum = 0;
        for(int i=0;i<a.length();i++)
            sum+=(a[i]-48);
        a = to_string(sum);
        k++;
    }
    return k;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string a;
    cin >> a;
    cout << solve(a) << endl;
}
