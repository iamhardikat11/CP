#include <iostream>

using namespace std;

int main() {
    int cnt = 0;
    int X;
    cin >> X;
    if(X==1) {
        cout << 0 << endl;
        return 0;
    }
    if(X==2) {
        cout << 1 << endl;
        return 0;
    }
    while(X!=1)
    {
        if(X==2) {
            cnt++;
            break;
        }
        if(X%3==0) X = X/3;
        else if(X%3==1) X-=1;
        else X+=1;
        cnt++;
    }
    cout << cnt << endl;
    return 0;
}