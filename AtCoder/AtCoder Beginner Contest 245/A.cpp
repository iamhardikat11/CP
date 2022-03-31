#include <bits/stdc++.h>
using namespace std;
 
int main()
{
	int A,B,C,D;
  	cin >> A >> B >> C >> D;
  	int a = 3600*A+60*B;
  	int b = 3600*C+60*D+1;
  	if(a<b)
      cout << "Takahashi" << endl;
  	else
      cout << "Aoki" << endl;
  	return 0;
}
