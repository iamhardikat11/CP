#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    string ans = "";
    int ans_a = 0;
    int ans_g = 0;
    bool found = true;
    while (t--)
    {
        int a, g;
        cin >> a >> g;
        if (abs(ans_a - ans_g + a) > 500 && abs(ans_a - ans_g-g)>500)
        {
            found = false;
        }
        else if(abs(ans_a - ans_g + a) > 500)
        {
            ans_g+=g;
            ans.push_back('G');
        }
        else if(abs(ans_a - ans_g-g) > 500)
        {
            ans_a+=a;
            ans.push_back('A');
        }
        else
        {
            if(a>g)
            {
                ans_g+=g;
                ans.push_back('G');
            }
            else
            {
                ans_a+=a;
                ans.push_back('A');
            }
        }
    }
    if(found)
    {
        cout << ans << endl;
    }
    else cout << -1 << endl;
    return 0;
}