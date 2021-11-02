#include <iostream>
using namespace std;
int main()
{
    string s;
    getline(std::cin, s);
    float whitespace = 0, lowercase = 0, uppercase = 0, symbols = 0;
    for(int i = 0; i <s.length(); i++)
    {
        if(s[i]=='_')
         whitespace++;
        else if(s[i]>=65 && s[i]<=90)
         uppercase++;
        else if(s[i]>=97 && s[i]<=122)
         lowercase++;
        else
         symbols++;
    }
    printf("%.13f\n%.13f\n%.13f\n%.13f\n",whitespace/s.length(),lowercase/s.length(),uppercase/s.length(),symbols/s.length());
}