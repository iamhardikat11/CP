#include <bits/stdc++.h>
using namespace std;
bool isPrime(int N)
{
     if(N==1)
      return false;
     else if(N==2)
      return true;
     else
     {
          for(int i=2;i<=sqrt(N);i++)
           if(N%i==0)
            return false;
          return true;
     }
}
int solve(int x,int y)
{
     int i=1;
     while(!isPrime(x+y+i))
     {
          i++;
     }
     return i;
}

int main() {
	// your code goes here
	int T;
	cin >> T;
	while(T--)
	{
	     int x,y;
	     cin >> x >> y;
	     cout << solve(x,y) <<endl;
	}
	return 0;
}
