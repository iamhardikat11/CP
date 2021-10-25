//Link:-https://www.codeabbey.com/index/task_view/pythagorean-theorem
#include <iostream>
using namespace std;
int main(void)
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        int cal=c*c-a*a-b*b;
        if(cal==0)
        cout<<"R ";
        else
        {
            if(cal>0)
            cout<<"O ";
            else
            cout<<"A ";
        }
    }
    return 0;
}
