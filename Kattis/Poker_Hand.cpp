//Link:-https://open.kattis.com/problems/pokerhand
#include <iostream>
using namespace std;
int main()
{
    int num[5];
    char suit[5];
    for(int i =0; i<5 ;i++)
    {
        cin >> num[i];
        cin >> suit[i];
    }   
    sort(num,num+5);
    
}