#include <bits/stdc++.h>
using namespace std;
int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
	     int a,b,n;
	     cin >> a >> b >> n;
	     if(n%2==0)
	     {
	          cout << max(a,b)/min(a,b) <<endl;;
	     }
	     else
	     {
	          cout << max(2*a,b)/min(2*a,b) <<endl;
	     }
	}
	return 0;
}
