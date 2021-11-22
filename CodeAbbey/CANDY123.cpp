#include <iostream>
using namespace std;
string solve(int A,int B)
{
     int i=1;
     while(true)
     {
          if(i*i>A)
           return "Bob";
          if(i*(i+1)>B)
           return "Limak";
          i++;
     }
}
int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
	     int A,B;
	     cin >> A >> B;
	     cout << solve(A,B) <<endl; 
	}
	return 0;
}
