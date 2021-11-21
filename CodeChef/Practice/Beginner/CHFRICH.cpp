#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
	     int A,B,X;
	     cin >> A >> B >> X;
	     cout << ceil((B-A)/X) <<endl;
	}
	return 0;
}
