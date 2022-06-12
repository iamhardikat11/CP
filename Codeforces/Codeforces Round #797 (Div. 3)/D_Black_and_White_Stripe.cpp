#include <bits/stdc++.h>
using namespace std;
void Substring(string s, int k)
{
    int ans = 1, temp = 1;
    int si = 0, f = 0;
    for (int i = 1; i < s.size(); i++)
    {
        if (s[i] == s[i - 1] && s[i] == 'B')
        {
            f = i;
            ++temp;
        }
        else
        {
            if (temp > ans)
            {
                si = i - 1;
                f = i;
            }
            ans = max(ans, temp);
            temp = 1;
        }
    }
    ans = max(ans, temp);
    if (ans >= k)
        cout << 0 << endl;
    else
    {
        cout << si << " " << f << endl;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string a;
        cin >> a;
        int tot = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 'B')
                tot++;
        }
        if (n == k)
            cout << (n - tot) << endl;
        else
        {
            Substring(a, k);
        }
    }
    return 0;
}