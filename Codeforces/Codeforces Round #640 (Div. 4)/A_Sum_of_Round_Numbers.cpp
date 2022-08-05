#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string a;
        cin >> a;
        string suffix = "";
        vector<string> s;
        string temp = "";
        for(int i=a.size()-1;i>=0;i--)
        {
            if(a[i]!='0') {
                if(suffix.size()>0)
                {
                    temp.push_back(a[i]);
                    s.push_back(temp+suffix);
                    suffix.push_back('0');
                    temp = "";
                }
                else{
                    suffix.push_back('0');
                }
            }
            else suffix.push_back('0');
        }
        if(a[a.size()-1]!='0') {
            temp = "";
            temp.push_back(a[a.size()-1]);
            s.push_back(temp);
        }
        cout << s.size() << endl;
        for(int i=0;i<s.size();i++) cout << s[i] << " ";
        cout << endl;
    }
    return 0;
}