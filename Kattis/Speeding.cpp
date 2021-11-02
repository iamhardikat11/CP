//Link:-https://open.kattis.com/problems/speeding
#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int arr[t][2];
    for(int i=0; i<t; i++)
    {
        for(int j=0; j<2;j++)
         cin>>arr[i][j];
    }
    int max=(arr[1][1])/(arr[1][0]);
    for(int i=0; i<t-1; i++)
    {
        if((arr[i+1][1]-arr[i][1])/(arr[i+1][0]-arr[i][0])>max)
         max=(arr[i+1][1]-arr[i][1])/(arr[i+1][0]-arr[i][0]);
    }
    cout<<max<<endl;
    return 0;
}