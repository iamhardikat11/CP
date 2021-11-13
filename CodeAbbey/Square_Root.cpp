//Link:-https://www.codeabbey.com/index/task_view/square-root
#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,N;
        cin>>x>>N;
        double r=1;
        while(N--)
        {
            r=(r+x/r)/2.0;
        }
        printf("%0.7f ",r);
    }
    return 0;
}
