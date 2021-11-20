#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	vector<int> v;
	int N;
	cin >> N;
	for(int i=0;i<N;i++)
	{
	     int a;
	     cin >> a;
	     v.push_back(a);
	}
	sort(v.begin(),v.end());
	cout << v[0]+v[1] <<endl;
   }
	return 0;
}
