//Link:-https://open.kattis.com/problems/lastfactorialdigit
#include <iostream>
using namespace std;
int main(void)
{
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        switch(N){
            case 1: cout<<"1"<<endl; break;
            case 2: cout<<"2"<<endl;break;
            case 3: cout<<"6"<<endl;break;
            case 4: cout<<"4"<<endl;break;
            default: cout<<"0"<<endl; break;
        }
    }
    return 0;
}