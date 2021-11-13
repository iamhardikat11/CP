//Link:-https://www.codeabbey.com/index/task_view/array-checksum
#include <iostream>
using namespace std;
int main()
{
    int n,a=0;
    long int sum=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        sum=((sum+a)*113)%10000007;
    }
    cout<<sum<<endl;
    return 0;
}
