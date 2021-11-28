#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc = 1;
    scanf("%d",&tc);
    for (int t = 1; t <= tc; t++) 
    {
        int X,A,B;
        scanf("%d %d %d",&X,&A,&B);
        printf("%d\n",10*(A+B*(100-X)));
    }
}
