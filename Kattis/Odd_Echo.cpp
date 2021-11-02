//Link:-https://open.kattis.com/problems/oddecho
#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int i=1;
    while (i<=t)
    {
        string s;
        cin>>s;
        if(i%2!=0)
        cout<<s<<endl;
        i++;
    }
    return 0;
}