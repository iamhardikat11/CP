//Link:-https://atcoder.jp/contests/abc226/tasks/abc226_b
#include <iostream>
#include <vector>
using namespace std;
typedef struct {
     int L;
     int *arr;
}store;
int main()
{
    int t;
    cin >> t;
    store a[t];
    for(int i = 0;i<t;i++)
    {
        cin >> a[i].L;
        for(int j=0;j<a[i].L;j++)
         cin >> a[i].arr[j];
    }

    return 0;
}