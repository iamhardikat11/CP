#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    long long int i,n,count=0;
	    cin>>n;
	    for(i=1;i*i<=n;i++)
	    {
	        if((i*i)%3!=0)
	        count++;
	    }
	    cout<<count<<endl;
	}
	return 0;
}