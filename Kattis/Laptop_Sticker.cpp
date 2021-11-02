//Link:-https://open.kattis.com/problems/laptopsticker
#include <iostream>
using namespace std;
int main()
{
    int wc,hc,ws,hs;
    cin>>wc>>hc>>ws>>hs;
    if((wc*hc)>=((ws+2)*(hs+2)))
     cout<< 1 <<endl;
    else
     cout<< 0 <<endl;
    return 0;
}