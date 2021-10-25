//Link:-https://www.codeabbey.com/index/task_view/average-of-array
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int t,a;
    cin>>t;
    while(t--)
    {
        int n=1;
        double sum=0;
        cin>>a;
        while(1)
        {
            sum+=a;
            cin>>a;
            if(a==0)
             break;
            else
             n++;
            
        }
        cout<<round(sum/n)<<" ";
    }
    return 0;
}
