#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
	     int bs;
	     cin >> bs;
	     double gs,bs_ = bs;
	     if(bs<1500)
	     {
	        gs = 2.0*bs_;  
	     }
	     else
	     {
	       gs = bs_+500.00+0.98*bs_;     
	     }
	     printf("%.2lf\n",gs);
	}
	return 0;
}
