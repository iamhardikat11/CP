#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
	     int N;
	     cin >> N;
	     int a[N+1];
	      a[0] = 0;
	     int b[N];
	     for(int i=1;i<N+1;i++)
	      cin >> a[i];
	     for(int j=0;j<N;j++)
	      cin >> b[j];
	     int count=0;
	     for(int i=0;i<N;i++)
	     {
	          if(b[i]<=(a[i+1]-a[i]))
	           count++;
	     }
	     cout << count <<endl;
	     
	}
	return 0;
}
