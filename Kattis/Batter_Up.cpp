//Link:-https://open.kattis.com/problems/batterup
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    double count = 0.0,sum=0.0;
    while(n--)
    {
        double x;
        cin>>x;
        if(x>=0 && x<=4)
        {
            count=count+1.0;
            sum+=x;
        }
    }
    printf("%.16lf",sum/count);
    return 0;
}