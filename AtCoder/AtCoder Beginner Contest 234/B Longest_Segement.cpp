#include <bits/stdc++.h>
using namespace std;
typedef struct point
{
     int x,y;
}point;

int main()
{
     int N;
     cin >> N;
     vector<point> v(N);
     for(int i=0;i<N;i++)
     {
          cin >> v[i].x;
          cin >> v[i].y;
     }
     double max_dist = 0.0;
     for(int i=0;i<N;i++)
     {
          for(int j=i+1;j<N;j++)
          {
               if(sqrt(pow(v[i].x-v[j].x,2)+pow(v[i].y-v[j].y,2))>max_dist)
                    max_dist = sqrt(pow(v[i].x-v[j].x,2)+pow(v[i].y-v[j].y,2));
          }
     }
     printf("%.6lf\n",max_dist);
     return 0;
}
