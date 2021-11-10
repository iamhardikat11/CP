//Link:-https://www.codeabbey.com/index/task_view/card-names
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int N;
        cin >> N;
        int suit_value = N/13;
        int card_value = N%13;
        switch(card_value)
        {
            case 0: cout<<"2-of-";
                    break;
            case 1: cout<<"3-of-";
                    break; 
            case 2: cout<<"4-of-";
                    break;
            case 3: cout<<"5-of-";
                    break;
            case 4: cout<<"6-of-";
                    break;
            case 5: cout<<"7-of-";
                    break;
            case 6: cout<<"8-of-";
                    break;
            case 7: cout<<"9-of-";
                    break;
            case 8: cout<<"10-of-";
                    break;
            case 9: cout<<"Jack-of-";
                    break;
            case 10: cout<<"Queen-of-";
                    break;
            case 11: cout<<"King-of-";
                    break;
            case 12: cout<<"Ace-of-";
                    break;
        }
        switch(suit_value)
        {
            case 0: cout<<"Clubs ";
                    break;
            case 1: cout<<"Spades ";
                    break;
            case 2: cout<<"Diamonds ";
                    break;
            case 3: cout<<"Hearts ";
                    break;
        }
    }
    return 0;
}
