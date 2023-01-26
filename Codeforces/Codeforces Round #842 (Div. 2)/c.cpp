#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
void run_test()
{
    int n,i,idx;
    cin>>n;
    vector<pair<int,int>> a(n);
    set <int> p,q;
    vector <int> ansp(n),ansq(n);
    for(i=0;i<n;i++)
    {
        cin>>a[i].first;
        a[i].second=i;
        p.insert(i+1);
        q.insert(i+1);
    }
    sort(a.begin(),a.end());
    for(i=0;i<n;i++)
    {
        idx=a[i].second;
        if(p.count(a[i].first))
        {
            auto it=q.lower_bound(a[i].first);
            if(it!=q.begin())
            {
                it--;
                ansp[idx]=a[i].first;
                ansq[idx]=*it;
                q.erase(it);
                p.erase(a[i].first);
                continue;
            }
            else if(*it==a[i].first)
            {
                ansp[idx]=a[i].first;
                ansq[idx]=*it;
                q.erase(it);
                p.erase(a[i].first);
                continue;
            }
        }
        if(q.count(a[i].first))
        {
            auto it=p.lower_bound(a[i].first);
            if(it!=p.begin())
            {
                it--;
                ansq[idx]=a[i].first;
                ansp[idx]=*it;
                p.erase(it);
                q.erase(a[i].first);
                continue;
            }
            else if(*it==a[i].first)
            {
                ansq[idx]=a[i].first;
                ansp[idx]=*it;
                p.erase(it);
                q.erase(a[i].first);
                continue;
            }
        }
        cout<<"NO"<<endl;
        return;
    }
    cout<<"YES"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<ansp[i]<<" ";
    }
    cout<<endl;
    for(i=0;i<n;i++)
    {
        cout<<ansq[i]<<" ";
    }
    cout<<endl;
}

int main() 
{
    int t; cin>>t;
    while(t--) run_test();
    return 0;
}