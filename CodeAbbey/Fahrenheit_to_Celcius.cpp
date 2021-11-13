//Link:-https://www.codeabbey.com/index/task_view/fahrenheit-celsius
#include <iostream>
using namespace std;
void round(double d)
{
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

int main()
{
     int t;
     cin>>t;
     while(t--)
     {
          int F;
          cin>>F;
          double C=(5.0*((double)F-32.0))/9.0;
          round(C);
     }
     return 0;
}
