#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
	     int N,K;
	     cin >> N >> K;
	     int max = 0;
	     for(int i=1;i<=K;i++)
	     {
	         if(N%i>max)
	          max = N%i;
	     }
	     cout << max <<endl;
	}
	return 0;
}
