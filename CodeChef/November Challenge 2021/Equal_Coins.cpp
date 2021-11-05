//Link:-https://www.codechef.com/NOV21C/
#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        if(x%2!=0 || x/2+y<3)
         cout<<"NO"<<endl;
        else
         cout<<"YES"<<endl;
    }
    return 0;
}