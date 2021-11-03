//Link:-https://open.kattis.com/problems/parking2
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int sum=0;
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];
        sort(arr,arr+n);
        if(n%2==0)
        {
           for(int i=0;i<n;i++)
               sum+=abs(arr[i]-arr[n/2]);
        }
        else
        {
           for(int i=0;i<n;i++)
               sum+=abs(arr[i]-arr[(n-1)/2]);
        }
        cout<<sum<<endl;
    }
    return 0;
}