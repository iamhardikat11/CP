//Link:-https://open.kattis.com/problems/jackolanternjuxtaposition
#include <iostream>
using namespace std;
int main(void)
{
    int N;
    cin>>N;
    int arr[N];
    int sum=0;
    for(int i = 0; i < N;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    cout<<sum-N+1<<endl;
    return 0;
    
}