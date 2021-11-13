//Link:-https://www.codeabbey.com/index/task_view/king-and-queen
#include <iostream>

using namespace std;

char can_take(int kx, int ky, int qx, int qy)
{
    if (kx==qx || ky==qy) return 'Y';
    if (ky==kx+(qy-qx) || ky==(-1)*kx+qx+qy) return 'Y';
    return 'N';
}

int main()
{
    int n;
    char kx, ky, qx, qy;
    cin>>n;
    while(n--)
    {
        cin>>kx>>ky>>qx>>qy;
        cout<<can_take(kx,ky,qx,qy)<<" ";
    }
    return 0;
}
