#include <iostream>
using namespace std;
int main()
{
    int n,k;
    cin >> n >> k;
    while(k>0)
    {
     if((n%10)>=k)
     {
         n -=k;
         k=0; 
     }
     else
     {
         k-=(n%10+1);
         n = n/10;  
     }
    }
    cout << n << endl;
}
