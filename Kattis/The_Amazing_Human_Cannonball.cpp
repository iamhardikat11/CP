//Link:-https://open.kattis.com/problems/humancannonball2
#include <iostream>
#include <cmath>
#define pi 3.142
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        float v_0,theta,x_1,h_1,h_2;
        cin >> v_0 >> theta >> x_1 >> h_1 >> h_2;
        float y = (x_1*tan(theta*(pi/180.0))) - (9.81/2.0)*pow((x_1/(v_0*cos(theta*(pi/180.0)))),2);
        if(y>=(h_1+1) && y<=(h_2-1))
         cout<<"Safe"<<endl;
        else
         cout<<"Not Safe"<<endl;
    }
    return 0;
}