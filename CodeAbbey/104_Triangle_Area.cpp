//Link:-https://www.codeabbey.com/index/task_view/triangle-area
#include <iostream>
#include <cmath>
using namespace std;
typedef struct {
    double x,y;
}point;
int main(void)
{
    int t;
    cin>>t;
    while(t--)
    {
       point A,B,C;
       cin>>A.x>>A.y>>B.x>>B.y>>C.x>>C.y;
       double area;
       area=abs(0.5*(A.x*(B.y-C.y)+B.x*(C.y-A.y)+C.x*(A.y-B.y)));
       printf("%.7lf ",area);
    }
}
