//Link:-https://www.codeabbey.com/index/task_view/median-of-three
#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        int mid=(a>b && a>c)?(b>c?b:c):((a>b || a>c) ?a:(b>c?c:b));
        cout<<mid<<" ";
    }
    return 0;
}
