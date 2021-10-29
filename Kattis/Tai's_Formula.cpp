//Link:-https://open.kattis.com/problems/taisformula
#include <bits/stdc++.h>
using namespace std;
struct glucose
{
    int t;
    float w;
};
typedef struct glucose glucose;
int main()
{
     int N;
     cin>>N;
     double area=0.0;
     glucose arr[N];
     for(int i=0;i<N;i++)
     {
          cin>>arr[i].t>>arr[i].w;
     }
     for(int i=0;i<N-1;i++)
     {
          area+=0.5*(float)(arr[i+1].t-arr[i].t)*(arr[i+1].w+arr[i].w);
     }
     area=area/1000.0;
     printf("%.7f",area);
     return 0;
}
