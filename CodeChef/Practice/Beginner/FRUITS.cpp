#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
	     int N,M,K;
	     cin >> N >> M >> K;
	     if(abs(M-N)>=K)
	      cout << abs(abs(M-N)-K) << endl;
	     else
	      cout << 0 <<endl;
	}
	return 0;
}
