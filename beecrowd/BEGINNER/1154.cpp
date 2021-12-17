#include <iostream>
using namespace std;
int main()
{
    int N = 0;
    int c = 0;
    int sum = 0;
    cin >> N; 
    if(N>=0)
    {
        c++;
        while(N>=0)
        {
            sum += N;
            c++;
            cin >> N;
        }
        printf("%.2f\n", (float)sum/(c-1));
    }
}
