#include <bits/stdc++.h>
using namespace std;
int main()
{
    pair<int,int> fraction;
    cin >> fraction.first >> fraction.second;
    assert(fraction.first < fraction.second);
    // check if the fraction is valid
    int k = ceil(fraction.second/(double)fraction.first);
    while(fraction.first)
    {
        cout << 1 << "/" << k << " ";
        fraction.first = k*fraction.first-fraction.second;
        fraction.second = k*fraction.second;
        k = ceil(fraction.second/(double)fraction.first);
        if(fraction.first==1)
        {
            cout << endl;
        }
        if(fraction.first==0)
        {
            break;
        }
        else
        {
            cout << " + ";
        }
    }
    cout << endl;
}