#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin >> a;
    int sum = 0;
    for(int i = 0; i < a.length();i++) sum+=a[i]-48;
    string b = (sum%9!=0)?"No":"Yes";
    cout << b << endl;
    return 0;
}