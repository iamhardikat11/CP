#include <bits/stdc++.h>
using namespace std;
vector<string> S;
int isPalindrome(string S)
{
    for (int i = 0; i < S.length() / 2; i++) {
 
        // If S[i] is not equal to
        // the S[N-i-1]
        if (S[i] != S[S.length() - i - 1]) {
            // Return No
            return 0;
        }
    }
    return 1;
}
void solve()
{
    int x = 0;
    while((x<=5) || (x>=10 && x<16) || (x>=20 && x<=23))
    {
        string a = "";
        if(x<=5) a=to_string(x)+to_string(x)+":"+to_string(x)+to_string(x);
        else a=to_string(x)+":"+to_string(x);
        S.push_back(a);
    }
}
int main()
{
    solve();
    for(int i=0;i<S.size();i++) cout << S[i] << " ";
    cout << endl;
    return 0;
}