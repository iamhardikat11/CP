#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ll tc;
	scanf("%lld",&tc);
	while(tc--)
	{
	  ll  N;
		scanf("%lld",&N);
		if(N==0)
		 printf("n is zero\n");
		else if(N>0)
		 printf("%lld is positive number\n");
		else
		 printf("%lld is negative number\n");
	}
	
}
