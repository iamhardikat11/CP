//Link:-https://open.kattis.com/problems/unlockpattern
#include <bits/stdc++.h>
using namespace std;
typedef struct 
{
    int x,y;
}point;
double distance(point p1, point p2)
{
    return sqrt(pow(p1.x-p2.x,2)+pow(p1.y-p2.y,2));
}
int main()
{
    int arr[3][3];
    point p[9];
    for(int i = 0; i < 3;i++)
    {
        for(int j = 0; j < 3;j++)
        {
            cin >> arr[i][j];
            p[arr[i][j]-1].x=i;
            p[arr[i][j]-1].y=j;
        }
    }
    double d=0.0;
    for(int i = 0; i < 8;i++)
    {
        d+=distance(p[i],p[i+1]);
    }
    printf("%.10f\n",d);
}