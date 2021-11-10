//Link:-https://open.kattis.com/problems/speedlimit
#include <iostream>
using namespace std;
typedef struct
{
    int s,t;
}info;
int main()
{
    int n;
    cin >> n;
    while (n!=-1)
    {
        info arr[n+1];
        arr[0].s=0;
        arr[0].t=0;
        int sum=0;
        for(int i = 1; i < n+1; i++){
            cin >> arr[i].s >> arr[i].t;
                sum+=arr[i].s*(arr[i].t-arr[i-1].t);
        }
        cout<<sum<<" miles\n";
        cin >> n;
    }
}