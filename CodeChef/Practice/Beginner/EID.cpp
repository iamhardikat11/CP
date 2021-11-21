#include <bits/stdc++.h>
using namespace std;
int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
	     int N;
	     cin >> N;
	     vector<int> v;
	     for(int i=0;i<N;i++)
	     {
	          int a;
	          cin >> a;
	          v.push_back(a);
	     }
	     sort(v.begin(),v.end());
	     int min = pow(10,6);
	     for(int i=0;i<N-1;i++)
	     {
	          if((v[i+1]-v[i])<min)
	           min = v[i+1]-v[i];
	     }
	     cout << min <<endl;
	}
	return 0;
}
