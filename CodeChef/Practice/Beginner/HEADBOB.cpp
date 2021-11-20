#include <iostream>
using namespace std;
string solve(char* s, int N)
{
  for(int i=0;i<N;i++)
  {
       if(s[i]=='I')
        return "INDIAN";
       else if(s[i]=='Y')
        return "NOT INDIAN";
  }
  return "NOT SURE";
}
int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
	     int len;
	     char* s;
	     cin >> len;
	     s = (char *)malloc(len*sizeof(char));
	     for(int i=0;i<len;i++)
	      cin >> s[i];
	     cout << solve(s,len) << endl;
	}
	return 0;
}
