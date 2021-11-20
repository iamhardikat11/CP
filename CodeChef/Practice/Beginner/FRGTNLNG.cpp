#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
	     int N,K;
	     cin >> N >> K;
	     string e[N];
	     string store[N];
	     for(int i=0;i<N;i++)
	     {
	          cin >> e[i];
	          store[i] = "NO";
	     }
	     for(int i=0;i<K;i++)
	     {
	          int L;
	          cin >> L;
	          string s[L];
	          for(int j=0;j<L;j++)
	          {
	               cin >> s[j];
	               for(int i=0;i<N;i++)
	               {
	                    if(s[j]==(e[i]))
	                     store[i] = "YES";
	               }
	          }
	     }
	     for(int i=0;i<N;i++)
	     {
	          cout<<store[i]<<" ";
	     }
	     cout<<endl;
	}
	return 0;
}
