#include <bits/stdc++.h>
using namespace std;
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // freopen("error.txt", "w", stderr);
    int N;
    cin >> N;
    vector<int> A(N);
    set<int> s;
    for(int i=0;i<N;i++) {
        cin >> A[i];
        s.insert(A[i]);
    }
    int k=0;
    for(auto it=s.begin();it!=s.end();it++)
    {
        if(*it!=k)
        {
            cout << k << endl;
            return 0;
        }
        k++;
    }
    cout << s.size() << endl; 
    return 0;
}
