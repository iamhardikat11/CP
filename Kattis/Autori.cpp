//Link:-https://open.kattis.com/problems/autori
#include <iostream>
using namespace std;
int main()
{
    string s;
    getline(std::cin, s);
    cout<<s[0];
    for(int i = 0; i < s.length();i++)
    {
        if(s[i]==45)
         cout<<s[i+1];
    }
    cout<<endl;
    return 0;
}