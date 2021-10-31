//Link:-https://open.kattis.com/problems/dicecup
#include <iostream>
using namespace std;
int main()
{
    int N,M;
    cin>>N>>M;
    for(int i=min(N,M)+1; i<=max(M,N)+1; i++)
     cout<<i<<endl;
     return 0;
}