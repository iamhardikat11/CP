Link:-https://open.kattis.com/problems/pot

#include <iostream>
#include <cmath>
using namespace std;
int calculate(int N)
{
    int r=N%10;
    N=N/10;
    return int(pow(N,r));
}
int main(void)
{
    int t;
    cin >> t;
    int sum=0;
    while (t--)
    {
        int N;
        cin >> N;
        sum+=calculate(N);
    }
    cout<<sum<<endl;
    return 0;
}
