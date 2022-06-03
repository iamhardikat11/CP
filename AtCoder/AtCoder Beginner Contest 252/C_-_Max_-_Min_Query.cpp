#include <bits/stdc++.h>
using namespace std;
int main()
{
    int Q;
    cin >> Q;
    multiset<int, greater<int> > it;
    while(Q--)
    {
        int p;
        cin >> p;
        if(p==1) {
            int x;
            cin >> x;
            it.insert(x);
        }
        if(p==2) {
            int x,c;
            cin >> x >> c;

        }
        if(p==3){
            auto a = it.begin();
            auto b = it.end();
            cout << *b-*a << endl;
        }
    }
}