#include <bits/stdc++.h>
using namespace std;
bool isDivisible(int arr[],int i,int len)
{
     for(int j=0;j<len;j++)
     {
          if(arr[j]%i!=0)
           return false;
     }
     return true;
}
void modify(int arr[],int l,int len)
{
     for(int i=0;i<len;i++)
      arr[i] = arr[i]/l;
}

void solve(int arr[],int len)
{
     int min = arr[0];
     for(int i=0;i<len;i++)
     {
          if(arr[i]<min)
           min = arr[i];
     }
     int l = 1;
     for(int i=2;i<=min;i++)
     {
          if(isDivisible(arr,i,len))
          {
           l = i;
          }
     }
     modify(arr,l,len);
}
int main() {
	// your code goes here
	int N;
	cin >> N;
	while(N--)
	{
	     int len;
	     cin>>len;
	     int arr[len];
	     for(int i=0;i<len;i++)
	      cin >> arr[i];
	     solve(arr,len);
	     for(int i=0;i<len;i++)
	      cout << arr[i] <<" ";
	     cout<<endl;
	}
	
	return 0;
}
