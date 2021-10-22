//Link:-https://open.kattis.com/problems/sumkindofproblem
#include <iostream>
using namespace std;
void print(int K,int N)
{
    cout<<K<<" ";
    cout<<(N*(N+1)/2)<<" "<<N*N<<" "<<N*(N+1)<<endl;
}
int main(void)
{
    int T;
    cin>>T;
    while(T--)
    {
        int K,N;
        cin>>K>>N;
        print(K,N);
    }
    return 0;
}