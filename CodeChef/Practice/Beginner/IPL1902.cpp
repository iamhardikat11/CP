#include <bits/stdc++.h>
int solve(int N)
{
    int count = 0;
    while(N!=0)
    {
        N = (N-pow((int)sqrt(N),2));
        count++;
    }
    return count;
}
int main(void)
{
    int T;
    scanf("%d",&T);
    while(T--)
    {
        int N;
        scanf("%d",&N);
        printf("%d\n",solve(N));
    }
}