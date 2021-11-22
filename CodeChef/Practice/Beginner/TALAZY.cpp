#include <bits/stdc++.h>

using namespace std;

long solve(int N,int M,int B) {
      long sum = 0;
      while(N>0)
      {
           if(N%2==0)
           {
                sum+=(B+(N/2*M));
                N = N/2;
           }
           else 
           {
                sum+=B+(((N+1)/2)*M);
                N = (N-(N+1)/2);
           }
           M = M*2;
           cout << sum << endl;
      }
      return (sum-B);
}

int main() {
    int tc;
    cin >> tc;
    for (int t = 1; t <= tc; t++) {
        // cout << "Case #" << t << ": ";
        int N,M,B;
        cin >> N >> B >> M;
        cout << solve(N,M,B) <<endl;
    }
}
