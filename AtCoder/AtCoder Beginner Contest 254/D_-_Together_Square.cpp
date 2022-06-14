#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;
    int A = floor(sqrt(N));
    int ans = A;
    int cnt=0;
    for(int i=1;i<A;i++)
    {
        for(int j=i+1;j<=N;j++)
        {
            int Q = i*j;
            int R = floor(sqrt(Q));
            if(R*R==i*j) cnt++;
        }
    } 
    cout << 2*cnt+A << endl;
    return 0;
}