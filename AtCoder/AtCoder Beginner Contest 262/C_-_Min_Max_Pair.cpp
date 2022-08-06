#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin >> n;
    vector<ll> nums(n);
    ll cnt = 0;
    ll i=1;
    for(int i=0;i<n;i++) {
        cin >> nums[i];
        nums[i]-=1;
        if(i==nums[i]) cnt++;
    }
    cnt = (cnt*(cnt-1))/2;
    for(ll i=0; i<n; i++)
    {
        // if(nums[i] > i)
        // {
        //     cout << i << " " << nums[nums[i]] << endl;
        // }
        if(nums[i] > i && i==nums[nums[i]]) cnt++;
    }
    cout << cnt << endl;
    return 0;
}