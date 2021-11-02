//Link:-https://open.kattis.com/problems/jabuke
#include <iostream>
#include <cmath>
using namespace std;
struct point{
    int x,y; 
};
typedef struct point point;
int main()
{
    point A,B,C;
    cin>>A.x>>A.y>>B.x>>B.y>>C.x>>C.y;
    int t;
    cin>>t;
    double area = (abs((A.x*(B.y-C.y)+B.x*(C.y-A.y)+C.x*(A.y-B.y)))/2.0);
    printf("%.1lf\n", area);
    int mi_x = min(min(A.x,B.x),min(A.x,C.x));
    int ma_x = max(max(A.x,B.x),max(A.x,C.x));
    int mi_y = min(min(A.y,B.y),min(A.y,C.y));
    int ma_y = max(max(A.y,B.y),max(A.y,C.y));
    int count=0;
    while(t--)
    {
        point p;
        cin>>p.x>>p.y;
        if(p.x>=min_x)
        
    }
}