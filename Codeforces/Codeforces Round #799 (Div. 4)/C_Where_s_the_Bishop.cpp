#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        vector<string> c(8);
        for(int i=0;i<8;i++) cin >> c[i];

        for(int i=1;i<7;i++)
        {
            int b = 0;
            for(int j=1;j<7;j++)
            {
                if(c[i-1][j-1] =='#' && c[i+1][j+1]=='#' && c[i+1][j-1]=='#' && c[i-1][j+1]=='#') 
                {
                        cout << i+1 << " " << j+1 << endl;
                        b=1;
                        break;
                }
                
            }
            if(b) break;
        }
    }
    return 0;
}