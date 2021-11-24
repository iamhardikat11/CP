#include <iostream>
#include <string>
using namespace std;
int solve(string A,string B)
{
    int count=0;
     for(int i=0;i<A.length();i++)
     {
        if(A[i]!=B[i] && A[i]!='?' && B[i]!='?')
          count++;
     }
     return count;
}
int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
	     string A,B;
	     cin >> A >> B;
	     int count = solve(A,B);
         cout << count << " " <<endl;
	     
	}
	return 0;
}
