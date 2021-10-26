//Link:-https://www.codeabbey.com/index/task_view/duel-chances
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        float a,b;
        cin>>a>>b;
        cout<<round(a*100/(a+b-((a*b)/100)))<<" ";
    }
    return 0;
}
