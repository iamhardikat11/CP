//Link:-https://www.codeabbey.com/index/task_view/sum-in-loop
#include <iostream>
using namespace std;
int main(void)
{
    int N,sum=0;
    cin>>N;
    while(N--)
    {
        int A;
        cin>>A;
        sum+=A;
    }
    cout<<sum<<endl;
    return 0;
}
