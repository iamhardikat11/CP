#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int D,N;
	cin >> D >> N;
	if(N!=100)
		cout << pow(100,D)*N << endl;
	else if(N)
		cout << pow(100,D)*(N+1) << endl;
	return 0;
}
