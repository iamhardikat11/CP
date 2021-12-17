#include <iostream>
using namespace std;
int main()
{
    double T;
    cin >> T;
    for(int i = 0;i<100;i++)
    {
       printf("N[%d] = %.4lf\n",i,T);
       T /= 2.0; 
    }
}
