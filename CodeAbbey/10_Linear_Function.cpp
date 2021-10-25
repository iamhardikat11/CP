//Link:-https://www.codeabbey.com/index/task_view/linear-function
#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;
        cout<<"("<<(y1-y2)/(x1-x2)<<" "<<((x2*y1-x1*y2)/(x2-x1))<<")"<<" ";
    }
    return 0;
}
