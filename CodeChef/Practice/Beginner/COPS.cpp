//Changes Needed
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
	     int M,x,y;
	     cin >> M >> x >> y;
	     int arr[M];
	     for(int i=0;i<M;i++)
	      cin >> arr[i];
	     int low =  (arr[0]-x*y)<=0?0:(arr[0]-x*y);
	     int high = (arr[0]+x*y)>=100?100:(arr[0]+x*y);
	     for(int i=1;i<M;i++)
	     {
	          int low_ = (arr[i]-x*y)<=0?0:(arr[i]-x*y);
	          int high_ = (arr[i]+x*y)>=100?100:(arr[i]+x*y);
	          if(low_<low)
	           low = low_;
	          if(high_>high)
	           high = high_;
	     }
	     cout << 100-(high-low) << endl;
	     
	}
	return 0;
}
