#include <iostream>
using namespace std;
bool isNotPrime(int n) { 
    if(n==1 || n==2)
     return false;
    for(int i=2;i<=sqrt(n);i++) 
     if(n%i==0)
      return true;
    return false;
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a,b;
        scanf("%d %d",&a,&b);
        int count = 0;
        for(int i=a;i<=b;i++)
        {
            if(isNotPrime(i))
             count++;
        }
        printf("%d\n",count);
    }
}