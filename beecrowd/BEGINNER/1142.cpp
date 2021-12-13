#include <iostream>
using namespace std;
int main()
{
    int N;
    cin >> N;
    int i=1;
    while(N--)
    {
        printf("%d %d %d PUM\n",i,i+1,i+2);
        i+=4;
    }
    return 0;
}
