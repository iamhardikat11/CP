//Link:-https://www.codeabbey.com/index/task_view/maximum-of-array
#include <iostream>
using namespace std;
int main()
{
    int arr[300];
    for(int i=0;i<300;i++)
    {
        cin>>arr[i];
    }
    int max=arr[0],min=arr[0];
    for(int i=1;i<300;i++)
    {
        if(arr[i]>max)
         max=arr[i];
        if(arr[i]<min)
         min=arr[i];
    }
    cout<<max<<" "<<min<<endl;
}
