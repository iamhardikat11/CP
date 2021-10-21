//Link:-https://open.kattis.com/problems/magictrick
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;
int main(void)
{
    string s;
    getline(std::cin, s);
    int N=s.length();
    int flag=1;
    for(int i=0; i<N;i++)
    {
        for(int j=i+1; j<N;j++)
        {
            if(s[i]==s[j])
            {
                flag=0;
                break;
            }
        }
    }
    cout << flag << endl;
    return 0;
}