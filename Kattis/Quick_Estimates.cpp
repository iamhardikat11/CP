//Link:-https://open.kattis.com/problems/quickestimate
#include <iostream> //I used <bits/stdc++.h> first and hence showed me wrong answer.
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        string num;
        cin >> num;
        cout << num.length() << endl;
    }
}
