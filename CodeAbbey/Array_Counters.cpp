//Link:-https://www.codeabbey.com/index/task_view/array-counters
#include <iostream>
using namespace std;
int main()
{
    int m,n;
    cin>>m>>n;
    int arr[m];
    int store[n]={0};
    for(int i=0;i<m;i++)
     cin>>arr[i];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(arr[j]==i+1)
            {
                store[i]++;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<store[i]<<" ";
    }
    cout<<"\n";
    return 0;
}
