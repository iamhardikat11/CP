//Link:-https://open.kattis.com/problems/hissingmicrophone
#include <iostream>
using namespace std;
int main()
{
    string s;
    getline(std::cin, s);
    int flag=0;
    for(int i = 0; i < s.length()-1;i++)
    {
         if(s[i] == 's' && s[i+1] == 's')
          flag=1;
    }
    if(flag == 1)
     cout<<"hiss"<<endl;
    else
     cout<<"no hiss"<<endl;
     return 0;
}