//Link:-https://www.codeabbey.com/index/task_view/quadratic-equation
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        float A,B,C;
        cin>>A>>B>>C;
        float d=B*B-4*A*C;
        if(d>=0)
        {
            cout<<(-B+sqrt(d))/(2*A)<<" "<<(-B-sqrt(d))/(2*A);
        }
        else
        {
            cout<<(-B/(2*A))<<'+'<<(sqrt(-d)/(2*A))<<"i"<<" "<<(-B/(2*A))<<'-'<<(sqrt(-d)/(2*A))<<"i";
        }
        if(t!=0)
         cout<<"; ";
    }
    return 0;
}
