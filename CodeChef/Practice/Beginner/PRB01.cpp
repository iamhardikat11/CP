#include <bits/stdc++.h>
using namespace std;
string solve(int N)
{
     if(N==2)
      return "yes";
     else if(N==1)
      return "no";
     for(int i=3;i<=sqrt(N);i++)
     {
          if(N%i==0)
           return "no";
     }
     return "yes";
}
int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
	     int N;
	     cin >> N;
	     cout << solve(N) <<endl;
	}
	return 0;
}
