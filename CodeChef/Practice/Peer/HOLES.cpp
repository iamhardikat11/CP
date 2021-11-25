#include <iostream>

using namespace std;

void solve(string s) {
     int count = 0;
     for(int i=0;i<s.length();i++)
     {
      if(s[i] == 'A' || s[i] == 'D' || s[i] == 'O' || s[i] == 'P' || s[i] =='R' || s[i] == 'S')
           count+=1;
      else if(s[i] =='B')
           count+=2;
     }
     cout << count <<endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc;
    string s;
    scanf("%d",&tc);
    for (int t = 1; t <= tc; t++) {
     //    printf("Case #",t,": "); 
     cin >> s;
     solve(s);
    }
}
