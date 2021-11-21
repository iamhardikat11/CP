#include <iostream>
using namespace std;
int sum(int N)
{
     int count=0;
     while(N!=0)
     {
          int r = N%10;
          count+=r;
          N = N/10;
     }
     return count;
}
int solve(int arr[],int N)
{
   int max = 0;
   if(N==2)
    return sum(arr[0]*arr[1]);
   for(int i=0;i<N;i++)
   {
        for(int j=i+1;j<N;j++)
        {
          if(sum(arr[i]*arr[j])>=max)
           max = sum(arr[i]*arr[j]);
        }
   }
   return max;
}
int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
	     int N;
	     cin >> N;
	     int arr[N];
	     for(int i=0;i<N;i++)
	      cin >> arr[i];
	     cout << solve(arr,N) <<endl;
	}
	return 0;
}
