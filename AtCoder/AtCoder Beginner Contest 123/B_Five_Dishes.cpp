#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v(5);
    int min_rem = 10; int idx = -1;
    int sum = 0;
    for(int i=0;i<5;i++)
    {
         cin >> v[i];
         sum += 10*ceil(v[i]/10.0);
        //  cout << sum <<  " ";
         if((v[i]%10)<(min_rem) && (v[i]%10!=0))
         {
             min_rem = (v[i]%10);
             idx = i;
         }
    }
    sum -= (10-min_rem);
    cout << sum << endl;
}
