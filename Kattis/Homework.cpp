#include <iostream>
using namespace std;
int indexOfNextSemiColon(string s)
{
    for(int i=0;;i++)
    {
        if(s[i]==';')
         return i;
    }
}
int main()
{
    string s;
    getline(std::cin, s);
    int total=0;
    for(int i = 0;i<s.length();i++)
    {
       string p = s.substr(i,indexOfNextSemiColon(s));
       if(p.length()==1)
        total+=1;
       else 
       {
           
       }

    }
}