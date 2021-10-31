//Link:-https://open.kattis.com/problems/bela
#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    t=4*t;
    int points=0;
    char ch;
    cin>>ch;
    while(t--)
    {
        char card,suit;
        cin>>card>>suit;
        if(suit==ch)
        {
             switch(card)
             {
                 case 'A': points+=11;
                           break;
                 case 'K': points+=4;
                           break;
                 case 'Q': points+=3;
                           break;
                 case 'J': points+=20;
                           break;
                 case 'T': points+=10;
                           break;
                 case '9': points+=14;
                           break;
             }
        }
        else
        {
             switch(card)
             {
                 case 'A': points+=11;
                           break;
                 case 'K': points+=4;
                           break;
                 case 'Q': points+=3;
                           break;
                 case 'J': points+=2;
                           break;
                 case 'T': points+=10;
                           break;
             }
        }
    }
    cout<<points<<endl;
    return 0;
}