#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	     int N,K;
	     cin >> N >> K;
	     int count=0;
	     int arr[N];
	     for(int i=0;i<N;i++)
	     {
	          cin >> arr[i];
	          if((arr[i]+K)%7==0)
	           count++;
	     }
	     cout << count << endl;          
 	}
	return 0;
}
