#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int n=0,m=0,k;
    string a,b;
    while(t--)
    {
        cin >> n >> m >> k;
        cin >> a >> b;
        int i=0,j=0;
        int n_ = n,m_ = m;
        string c = "";
        int p1 = 0, p2 = 0;
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        int who=-1;
        auto ch = a.begin();
        while(a.size()>0 && b.size()>0)
        {
            if((int)a[0]<(int)b[0])
            {
                c+=a[i];
                ch = a.begin();
                a.erase(a.begin());
                who=0;
            }
            if((int)a[0]>=(int)b[0])
            {
                c+=b[j];
                ch = b.begin();
                b.erase(b.begin());
                who=1;
            }  
            if(who==1)
            {
                p2++;
                p1=0;
            }
            if(who==0)
            {
                p1++;
                p2=0;
            }
            
            if(p1>k) {
                c.erase(c.end());
                a = *ch+a;
            }
            if(p2>k) {
                c.erase(c.end());
                b = *ch+b;
            }
            cout << a << " " << p1 << " " << p2 << " " << b << " " << c  << endl;
        }
        cout << c << endl;
    }
    return 0;
}
