#include <iostream>
#include <cmath>
using namespace std;
int solve(int a)
{
     if(a==1)
      return 0;
     if(a==2)
      return 1;
     for(int i=3;i<=sqrt(a);i++)
     {
          if(a%i==0)
           return 0;
     }
     return 1;
}
int main() {
	// your code goes here
	int N;
	cin >> N;
	while(N--)
	{
	     int a;
	     cin >> a;
	     if(solve(a))
	      cout<<"yes"<<endl;
	     else
	      cout<<"no"<<endl;
	     
	}
	return 0;
}
