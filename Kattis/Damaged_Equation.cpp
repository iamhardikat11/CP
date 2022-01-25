#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    int flag = 0;
    if(a*b == c*d)
    {    cout << a << " * " << b << " = " << c << " * " << d << std::endl; flag = 1; }
    if(a*b == c+d)
    {    cout << a << " * " << b << " = " << c << " + " << d << std::endl; flag = 1; }
    if(a*b == c - d)
    {    cout << a << " * " << b << " = " << c << " - " << d << std::endl; flag = 1; }
    if(d!=0 && a*b == c / d)
    {    cout << a << " * " << b << " = " << c << " / " << d << std::endl; flag = 1; }
    if(a + b == c*d)
    {   cout << a << " + " << b << " = " << c << " * " << d << std::endl; flag = 1; }
    if(a + b == c + d)
    {    cout << a << " + " << b << " = " << c << " + " << d << std::endl; flag = 1; }
    if(a + b == c - d)
    {    cout << a << " + " << b << " = " << c << " - " << d << std::endl; flag = 1; }
    if(d!=0 && a + b == c / d)
    {    cout << a << " + " << b << " = " << c << " / " << d << std::endl; flag = 1; }
    if(a-b == c*d)
    {    cout << a << " - " << b << " = " << c << " * " << d << std::endl; flag = 1; }
    if(a-b == c+d)
    {    cout << a << " - " << b << " = " << c << " + " << d << std::endl; flag = 1; }
    if(a-b == c - d)
    {    cout << a << " - " << b << " = " << c << " - " << d << std::endl; flag = 1; }
    if(d!=0 && a-b == c / d)
    {    cout << a << " - " << b << " = " << c << " / " << d << std::endl; flag = 1; }
    if(b!=0 && a / b == c*d)
    {    cout << a << " / " << b << " = " << c << " * " << d << std::endl; flag = 1; }
    if(b!=0 && a / b == c+d)
    {    cout << a << " / " << b << " = " << c << " + " << d << std::endl; flag = 1; }
    if(b!=0 && a / b == c - d)
    {    cout << a << " / " << b << " = " << c << " - " << d << std::endl; flag = 1; }
    if(b!=0 && d!=0 &&  a / b == c / d)
    {    cout << a << " / " << b << " = " << c << " / " << d << std::endl; flag = 1; }
    if(flag == 0)
        cout << "problems ahead" << std::endl;
}
