#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	int p;
	cin >> p;
	int count=0;
	while(p!=0)
	{
	   if(p>=2048)
	   {
	        count+=p/2048;
	        p = p%2048;
	   }
	   else if(p>=1024)
	   {
	        count+=p/1024;
	        p = p%1024;
	   }
	   else if(p>=512)
	   {
	        count+=p/512;
	        p = p%512;
	   }
	   else if(p>=256)
	   {
	        count+=p/256;
	        p = p%256;
	   }
	   else if(p>=128)
	   {
	        count+=p/128;
	        p = p%128;
	   }
	   else if(p>=64)
	   {
	        count+=p/64;
	        p = p%64;
	   }
	   else if(p>=32)
	   {
	        count+=p/32;
	        p = p%32;
	   }
	   else if(p>=16)
	   {
	        count+=p/16;
	        p = p%16;
	   }
	   else if(p>=8)
	   {
	        count+=p/8;
	        p = p%8;
	   }
	   else if(p>=4)
	   {
	        count+=p/4;
	        p = p%4;
	   }
	   else if(p>=2)
	   {
	        count+=p/2;
	        p = p%2;
	   }
	   else 
	   {
	        count+=p;
	        p=0;
	   }
	   
	}
	cout << count <<endl;
  }
  return 0;
}
