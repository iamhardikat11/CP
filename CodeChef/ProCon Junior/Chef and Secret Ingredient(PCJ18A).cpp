//LINK:-https://www.codechef.com/problems/PCJ18A
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	     int N,X;
	     cin>>N>>X;
	     int data;
	     int flag=0;
	     while(N--)
	     {
	          cin>>data;
	          if(data>=X)
	           flag=1;
	     }
	     if(flag)
	      cout<<"YES"<<endl;
	     else
	      cout<<"NO"<<endl;
	}
	return 0;
}
