//Link:-https://www.codeabbey.com/index/task_view/cloud-altitude-measurement
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
       int D1;
       double A,B;
       cin>>D1>>A>>B;
       cout<<round((((double)D1)*tan(A*(3.142/180.0))*tan(B*(3.142/180.0)))/((tan(B*(3.142/180.0))-tan(A*(3.142/180.0)))))<<" ";
   }
}