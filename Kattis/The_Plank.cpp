//Link:-https://open.kattis.com/problems/theplank
#include <iostream>
using namespace std;
int solve(int N)
{
    if(N<=0)
     return 0;
    else if(N==1)
     return 1;
    else if(N==2)
     return 2;
    else if(N==3)
     return 3;
    else
     return 1+solve(N-1)+solve(N-2)+solve(N-3);
}
int main()
{
    int n;
    cin >> n;
    cout<<solve(n)<<" ";
}