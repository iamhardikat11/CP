//Link:-https://open.kattis.com/problems/ladder
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double h,v;
    cin>>h>>v;
    cout<<int(ceil(h/sin(((v*3.142)/180.0))));
    return 0;
}