#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;
    vector<int> A(N);
    for(int i=0;i<N;i++) cin >> A[i];
    int Q;
    cin >> Q;
    vector<map<int,int>> v;
    map<int,int> b;
    for(int i=0;i<N;i++)
    {
        b[A[i]]++;
        v.push_back(b);
    }
    while(Q--)
    {
        int L,R,X;
        cin >> L >> R >> X;
        
    }
}