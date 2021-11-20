#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	int N;
	cin >> N;
	if(N%10==0)
	     cout << 0 << endl;
	else
	{
	     if(N%5!=0)
	      cout << -1 << endl;
	     else 
	      {
	           int count=0;
	           while(N%10!=0)
	           {
	                N*=2;
	                count++;
	           }
	           cout << count << endl;
	      }
	 }
	}
	
	return 0;
}
