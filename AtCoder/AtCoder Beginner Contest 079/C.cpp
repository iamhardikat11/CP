#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int A,B,C,D;
    string a;
    cin >> a; 
    A = a.at(0)-48;
    B = a.at(1)-48;
    C = a.at(2)-48;
    D = a.at(3)-48;
    if(A+B+C+D == 7)
        cout << A << "+" << B << "+" << C << "+" << D << "=" << 7 << endl;
    else if(A-B+C+D==7)
        cout << A << "-" << B << "+" << C << "+" << D << "=" << 7 << endl;
    else if(A+B-C+D==7)
        cout << A << "+" << B << "-" << C << "+" << D << "=" << 7 << endl;
    else if(A+B+C-D==7)
        cout << A << "+" << B << "+" << C << "-" << D << "=" << 7 << endl;
    else if(A-B-C+D==7)
        cout << A << "-" << B << "-" << C << "+" << D << "=" << 7 << endl;
    else if(A+B-C-D==7)
        cout << A << "+" << B << "-" << C << "-" << D << "=" << 7 << endl;
    else if(A-B+C-D==7)
        cout << A << "-" << B << "+" << C << "-" << D << "=" << 7 << endl;
    else
        cout << A << "-" << B << "-" << C << "-" << D << "=" << 7 << endl;
    return 0;
}
