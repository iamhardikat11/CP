//Link:-https://open.kattis.com/problems/chanukah
#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int N,d;
        cin>>N>>d;
        cout<<N<<" "<<((d*(d+1))/2)+d<<endl;
    }
    return 0;
}