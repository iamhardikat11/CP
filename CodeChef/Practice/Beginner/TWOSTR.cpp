#include <bits/stdc++.h>
using namespace std;
string solve(string a, string b)
{
     for(int i=0;i<a.length();i++)
     {
          if(a[i]!=b[i])
           if(a[i]!='?' && b[i]!='?')
            return "No";
     }
     return "Yes";
}
int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
	     string a,b;
	     cin >> a >> b;
	     cout << solve(a,b) <<endl;
	}
	return 0;
}
