#include <bits/stdc++.h>
using namespace std;
vector<int> A;
void fibo()
{
    int a=1;
    A.push_back(a);
    int b=2;
    while(b<=4000000){
        A.push_back(b);
        int t=b+a;
        a=b;
        b=t;
    }
    return;
}
int main ()
{
    fibo();
    long long sum=0;
    for(int i=0;i<A.size();i++){
        if(A[i]%2==0) {
            sum+=A[i];
        }
    }
    cout << sum << endl;
    return 0;
}
