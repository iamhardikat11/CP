//Link:-https://www.codeabbey.com/index/task_view/rounding
#include <iostream>
#include <cmath>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	  double a,b;
          cin>>a>>b;
	  double d=a/b;
          double f=d-(long)d;
          if(d>=0){
            if(f>=0.5)
             cout<<(d-f)+1<<" ";
            else if(f<0.5)
              cout<<(d-f)<<" ";
         }
         else{
             f=-f;
             if(f>=0.5)
               cout<<(d+f)-1<<" ";
             else if(f<0.5)
              cout<<(d+f)<<" ";
         }
         

	}
	return 0;
}
