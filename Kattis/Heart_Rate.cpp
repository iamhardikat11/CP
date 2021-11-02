//Link:-https://open.kattis.com/problems/heartrate
#include <iostream>
using namespace std;
int main()
{
    int N;
    cin>>N;
    while(N--)
    {
        int b;
        float p;
        cin>>b>>p;
        printf("%.4f %.4f %.4f\n",60.0000*(b-1)/p,60.0000*(b)/p,60.0000*(b+1)/p);
    }
}