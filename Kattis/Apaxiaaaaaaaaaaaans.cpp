//Link:-https://open.kattis.com/problems/apaxiaaans
#include <iostream>
using namespace std;
int main()
{
    string s;
    getline(std::cin,s);
    for(int i=0;i<s.length();i++)
    {
        if(s.length()==1){
         cout<<s[0];
         return 0;
        }
        if(s[i]!=s[i+1] && i!=s.length()-1)
         cout<<s[i];
        if(i==s.length()-1 && s[i]!=s[i-1])
         cout<<s[i];
    }
    return 0;
}