
#include <bits/stdc++.h>
using namespace std;

int solve(int p[], int n)
{
    int R = 0;
    for (int i = 0; i < n; i++)
    {
            R ^= (p[i] - 1);
    }
    return R;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int p[n];
        for (int i = 0; i < n; i++)
            cin >> p[i];
        int res = solve(p, n);
        cout << res << endl;
        if (res == 0)
            cout << "CHEFINA" << endl;
        else 
            cout << "CHEF" << endl;
    }
    return 0;
}
