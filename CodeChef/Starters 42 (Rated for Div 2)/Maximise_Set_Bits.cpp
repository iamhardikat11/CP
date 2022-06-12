#include <bits/stdc++.h>
using namespace std;
bool isPowerOfTwo (int x)
{
    return x && (!(x&(x-1)));
}
int countSetBits(unsigned int n)
{
    unsigned int count = 0;
    while (n) {
        count += n & 1;
        n >>= 1;
    }
    return count;
}
int main()
{
    int t;
    cin >> t;
    while (t--) {   
        int N,K;
        cin >> N >> K;
        if(K==1)
            cout << 1 << endl;
        else if(N>=K)
            cout << K << endl;
        else
        {
            int p = countSetBits(K);
            if(N==1) cout << p << endl;
            else
            {
                
            }

        }
    }
}