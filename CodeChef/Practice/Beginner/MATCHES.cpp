#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
	     int A,B;
	     cin >> A >> B;
	     A = A+B;
	     int count = 0;
	     while(A!=0)
	     {
	          int r = A%10;
	          if(r==0 || r==6 || r==9)
	           count+=6;
	          else if(r==1)
	           count+=2;
	          else if(r==2 || r==3 || r==5)
	           count+=5;
	          else if(r==4)
	           count+=4;
	          else if(r==7)
	           count+=3;
	          else
	           count+=7;
	          A = A/10;
	     }
	     cout << count <<endl;
	}
	return 0;
}
