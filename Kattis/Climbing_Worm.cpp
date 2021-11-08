//Link:-https://open.kattis.com/problems/climbingworm
#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int a,b,h;
    cin >> a >> b >> h;
    int count=0;
    int d=0;
        while(d<h)
        {
            count++; 
            d+=(a-b);
        }
    cout<< count << endl;
    return 0;
}