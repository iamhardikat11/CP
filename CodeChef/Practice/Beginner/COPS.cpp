//Changes Needed
#include <iostream>
using namespace std;
int solve(bool canHide[])
{
	int c = 0;
	for (int i = 1; i<=100;i++)
	{
		if(canHide[i]==false)
		 c++;
	}
	return c;
}
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
		 bool canHide[101];
		 for(int i=1;i<101;i++)
		  canHide[i] = false; 
	     for(int i=0;i<M;i++)
	     {
	          int low = (arr[i]-x*y)<=0?0:(arr[i]-x*y);
	          int high = (arr[i]+x*y)>=100?100:(arr[i]+x*y);
	          for(int i=low;i<=high;i++)
			   canHide[i] = true; 
	     }
	     printf("%d\n",solve(canHide));
	}
	return 0;
}
