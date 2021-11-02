//Link:-https://open.kattis.com/problems/relocation
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int N,Q;
    cin >> N >> Q;
    int location[N];
    for(int i=0;i<N;i++)
     cin>>location[i];
    for(int i=0;i<Q;i++)
    {
        int q;
        cin>>q;
        if(q==1)
        {
           int C,X;
           cin>>C>>X;
           location[C-1] = X;
        }
        else
        {
           int A,B;
           cin>>A>>B;
           cout<<abs(location[A-1]-location[B-1])<<endl;
        }
    }
    return 0;
}