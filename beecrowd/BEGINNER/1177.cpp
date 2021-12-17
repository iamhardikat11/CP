#include <iostream>
using namespace std;
int main()
{
    int T;
    cin >> T;
    int a = 0;
    for(int i = 0;i<1000;i++)
    {
        	printf("N[%d] = %d\n",i,a);
            a++;
            if(a==(T))
             a = 0;
    }
}
