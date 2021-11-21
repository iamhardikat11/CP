#include <bits/stdc++.h>
using namespace std;
int minCount(string s)
{
   int a_ = 0, b_ =0;
   for(int i=0;i<s.length();i++)
   {
        if(s[i]=='a')
         a_++;
        else 
         b_++;
   }
   return a_>b_?b_:a_;
}
int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
	     string s;
	     cin >> s;
	     cout << minCount(s) << endl;
	}
	return 0;
}
