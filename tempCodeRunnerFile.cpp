#include <iostream>
#include <string>
using namespace std;
String binary(int N)
{
    String s = "";
    while (N!=0)
    {
        s = s.append((char)(N%2+48));
        N = N/2;
    }
    return s;
}
void solve(int N)
{
    int sum=0;
    String s = binary(N);
    cout<<s<<endl;
    
}
int main() {
    int N;
    cin >> N;
    solve(N);
}