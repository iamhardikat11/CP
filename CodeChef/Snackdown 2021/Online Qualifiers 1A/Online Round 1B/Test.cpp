#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int D;
        float A;
        cin>>D>>A;
        cout<<round(D*tan((3.142/180.0)*(A-90)))<<" ";
    }
    return 0;
}