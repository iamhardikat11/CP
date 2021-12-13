#include <iostream>
using namespace std;
int main()
{
    int N;
    cin >> N;
    for(int i=1;i<=N;i++)
    {
      printf("%d %d %d\n",i,i*i,i*i*i);
    }
    return 0;
}
