#include <iostream>
#include <map>
using namespace std;

int main() {
    int n;
    cin >> n;
    map<int,int> mp;
    for(int i=0;i<n;i++)
    {
        int x;
        cin >> x;
        mp[x%2]++;
    }
    cout << mp[0]*mp[1] << endl;
    return 0;
}