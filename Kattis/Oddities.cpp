//Link:-https://open.kattis.com/problems/oddities
#include <iostream>
using namespace std;
int main() {
    int N;
    cin >> N;
    while(N--) {
        int num;
        cin >> num;
        if(num % 2==0)
         cout<<num<<" is even"<<endl;
        else
         cout<<num<<" is odd"<<endl;
    }
    return 0;
}