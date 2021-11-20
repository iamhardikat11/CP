#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	     double h,c_,t;
	     cin >> h >> c_ >> t;
	     bool a = h>50;
	     bool b = c_<0.7;
	     bool c = t>5600;
	     if(a && b && c)
	          cout << 10 <<endl;
          else if(a&&b)
               cout << 9 <<endl;
          else if(b&&c)
               cout << 8 <<endl;
          else if(c&&a)
               cout << 7 <<endl;
          else if(a || b || c)
               cout << 6 <<endl;
          else
               cout << 5 << endl; 
	}
	return 0;
}
