#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin >> a;
    int Y = stoi(a.substr(0, 4));
    int M = stoi(a.substr(5, 2));
    int D = stoi(a.substr(8));
    if (Y <= 2019)
    {
        if (Y < 2019)
            cout << "Heisei" << endl;
        else
        {
            if (M > 4)
                cout << "TBD" << endl;
            else if (M == 4)
            {
                if (D <= 30)
                    cout << "Heisei" << endl;
                else
                    cout << "TBD" << endl;
            }
            else
            {
                cout << "Heisei" << endl;
            }
        }
    }
    else
    {
        cout << "TBD" << endl;
    }
    return 0;
}