#include <iostream>
using namespace std;
int main(void)
{
    int t;
    cin>>t;
    while (t--)
    {
        int r,e,c;
        cin>>r>>e>>c;
        int total=e-r-c;
        if(total==0)
        cout<<"does not matter"<<endl;
        else if(total>0)
        cout<<"advertise"<<endl;
        else
        cout<<"do not advertise"<<endl;
    }
    return 0;
}