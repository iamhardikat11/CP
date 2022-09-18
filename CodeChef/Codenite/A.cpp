#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
	    ll n,m;
	    cin >> n >> m;
	    vector<int> v1(n),v2(m);
	    map<int,int> m1,m2;
	    for(ll i=0;i<n;i++) {
	        cin >> v1[i];
	        m1[v1[i]]++;
	    }
	    for(ll i=0;i<m;i++) {
	        cin >> v2[i];
	        m2[v2[i]]++;
	    }
	    int flag = false;
	    for(auto it: m2)
	    {
	        auto x = m1.find(it.first);
	        if(x==m1.end())
	        {
	            cout << "NO" << endl;
	            flag = true;
	            break;
	        }
	        else
	        {
	            if((*x).second < it.second)
	            {
	                cout << "NO" << endl;
	                flag = true;
	                break;
	            }
	        }
	    }
	    if(!flag)
	        cout << "YES" << endl;
	}
	return 0;
}
