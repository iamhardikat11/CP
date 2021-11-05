//Link:-https://www.codechef.com/NOV21C/submit/CHEAPFUEL
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin >> T;
	while(T--)
	{
	     int A,B,X,Y,K;
	     cin >> X >> Y >> A >> B >> K;
	     int result = (X-Y)+(K)*(A-B);
	     if(result==0)
	      cout<<"SAME PRICE"<<endl;
	     else if(result>0)
	      cout<<"DIESEL"<<endl;
	     else
	      cout<<"PETROL"<<endl;
	}
	return 0;
}
