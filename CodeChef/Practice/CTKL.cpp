#include<iostream>
using namespace std;
// h >= 5*d*d/(u*u)
typedef long long ll;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll h,d,u;
        cin>>h>>d>>u;
        if(h>=((5*d*d)/(long double)(u*u)))
        cout<<"Ran away\n";
        else
        cout<<"Caught\n";
    }
}
