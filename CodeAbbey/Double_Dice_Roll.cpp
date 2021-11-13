//Link:-https://www.codeabbey.com/index/task_view/double-dice-roll
#include <iostream>
using namespace std;
#define ll long long 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll a,b;
        cin>>a>>b;
        cout<<a%6+b%6+2<<" ";
    }
    return 0;
}
