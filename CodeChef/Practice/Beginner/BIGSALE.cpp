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
	     double total = 0.0;
	     for(int i=0;i<N;i++)
	     {
	          int p,q,d;
	          cin >> p>>q>>d;
	          total+= q*(p*(pow(d/100.0,2)));
	     }
	     printf("%.7lf\n",total);
	}
	return 0;
}
