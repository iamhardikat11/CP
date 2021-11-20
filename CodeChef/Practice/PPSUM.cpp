#include <iostream>
using namespace std;
int solve(int N)
{
     return (N*(N+1))/2;
}
int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
	     int N,D;
	     cin >> D >> N;
	     int store = solve(N);
	     for(int i=1;i<D;i++)
	          store = solve(store);
	     cout << store << endl;     
	}
	return 0;
}
