#include <iostream>
using namespace std;
bool solve(int N)
{
     int rev = 0;
     int original = N;
     while(N!=0)
     {
          int r = N%10;
          rev = rev*10+r;
          N = N/10;
     }
     return (original == rev);
}
int main() {
	// your code goes here
	int t; 
	cin >> t;
	while(t--)
	{
	     int N;
	     cin >> N;
	     if(solve(N))
	      cout<<"wins"<<endl;
	     else
	      cout<<"loses"<<endl;
	}
	return 0;
}
