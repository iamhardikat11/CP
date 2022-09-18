#include <bits/stdc++.h>
using namespace std;
#ifdef LOCAL
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)
#else
#define dbg(...)
#endif
#define ar array
#define ll long long
#define ld long double
#define sza(x) ((int)x.size())
#define all(a) (a).begin(), (a).end()
#define forn(i, n) for (int i = 0; i < int(n); i++)

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

bool can_push(char ch, char a)
{
    vector<char> s = {'^','/','*','+','-'};
    int k1 = -1;
    int k2 = -1;
    for(k1 = 0; k1 < s.size(); k1++)
    {
        if(s[k1] == ch)
            break;
    }
    for(k2 = 0; k2 < s.size(); k2++)
    {
        if(s[k2] == a)
            break;
    }
    return (k1 > k2);
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        string a;
        cin >> a;
        stack<char> opn;
        string b = "";
        for(int i=0;i<a.size();i++)
        {
             if(a[i]=='(')
             {
                continue;
             }
             else if(a[i]=='*' || a[i]=='/' || a[i]=='+' || a[i]=='-' || a[i]=='^')
             {
                if(opn.empty())
                {
                    opn.push(a[i]);
                    continue;
                }
                char ch = opn.top();
                if(can_push(ch,a[i]))
                    opn.push(a[i]);
                else
                {
                    
                    while(!opn.empty() && !can_push(ch,a[i]))
                    {
                        b.push_back(opn.top());
                        opn.pop();
                        if(!opn.empty())
                            ch = opn.top();
                    }
                    opn.push(a[i]);
                }
             }
             else if(a[i]==')')
             {
                while(!opn.empty())
                {
                    b.push_back(opn.top());
                    opn.pop();
                }
             }
             else
                b.push_back(a[i]);
        }
        cout << b << endl;
    }
    return 0;
}