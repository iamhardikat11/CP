//Link:-https://open.kattis.com/problems/finalexam2
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char c[n];
    for(int i=0;i<n;i++)
    {
        cin>>c[i];
    }
    int count=0;
    for(int i=0;i<n-1;i++)
    {
       if(c[i]==c[i+1])
        count++;
    }
    cout<<count<<endl;
    return 0;
}
