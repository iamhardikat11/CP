//Link:-https://open.kattis.com/problems/smil
#include <iostream>
using namespace std;
int main()
{
    string s;
    getline(std::cin, s);
    for(int i = 0; i < s.length()-1; i++)
    {
        if(s[i] == ':')
        {
            if(i<=s.length()-3 && s[i+1] == '-' && s[i+2]==')' )
             cout<<i<<endl;
            else if(i<=s.length()-2 && s[i+1]==')')
             cout<<i<<endl;
        } 
        if(s[i] == ';')
        {
            if(i<=s.length()-3 && s[i+1] == '-' && s[i+2]==')' )
             cout<<i<<endl;
            else if(i<=s.length()-2 && s[i+1]==')')
             cout<<i<<endl;
        }
    }
    return 0;
}