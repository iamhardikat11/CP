#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    double a = (x1+x2)/2.0;
    double b = (y1+y2)/2.0;
    double c = sqrt(pow(a-x1,2)+pow(b-y1,2));
    if(c>sqrt(5.0)) cout << "No" << endl;
    else{
        double A = pow(x1-a,2)+pow(y1-b,2);
        double B = pow(x2-a,2)+pow(y2-b,2);
        cout << A << " " << B << endl;
        if((A==1 && B==1) || (A==4 && B==4) || (A==5 && B==5)) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}