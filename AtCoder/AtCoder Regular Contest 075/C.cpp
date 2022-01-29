#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int N,sum=0;
    cin >> N;
    vector<int> v(N);
    int min = INT_MAX;
    for(int i=0; i<N; i++) { cin >> v[i]; if(v[i]%10!=0 && v[i]<min) min = v[i]; sum += v[i]; }
    if(sum%10==0)
    {
        if(min==INT_MAX) cout << 0 << endl;
        else cout << sum-min << endl;
    }
    else cout << sum << endl;

}
