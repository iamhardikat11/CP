//Link:-https://www.codeabbey.com/index/task_view/prime-ranges
#include <iostream>
#include <cmath>
using namespace std;
int isPrime(int n){
    if(n==2) return 1;
    for(int i=2;i<sqrt(n)+1;i++)
     if(n%i==0)
      return 0;
    return 1;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        int count=0;
        for(int i=a;i<=b;i++)
         if(isPrime(i))
          count+=1;
        cout<<count<<" ";
    }
    return 0;
}
