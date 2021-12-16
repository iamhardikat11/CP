#include <iostream>
using namespace std;
#define ll long long
bool isLucky(ll N)
{
    if(N==0)
     return false;
    while(N>0)
    {
        int r = N%10;
        if(r!=4 && r!=7)
         return false;
        N = N/10;
    }
    return true;
}
int main()
{
   ll n;
   cin >> n;
   int c = 0;
   while(n!=0)
   {
       int r = n%10;
       if(r==4 || r==7)
        c++;
       n = n/10;
   }
   if(isLucky(c))
     cout << "YES" <<endl;
   else 
     cout << "NO" <<endl;
    
} 
