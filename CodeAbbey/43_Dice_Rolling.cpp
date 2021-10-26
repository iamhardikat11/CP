//Link:-https://www.codeabbey.com/index/task_view/dice-rolling
#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        double N;
        cin>>N;
        cout<<int(N*6)+1<<" ";
    }
    return 0;
}
