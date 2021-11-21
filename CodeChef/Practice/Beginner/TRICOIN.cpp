#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
	     long N;
	     cin >> N;
	     cout << floor((sqrt(1+8*N)-1)/2) << endl;
	}
	return 0;
}
