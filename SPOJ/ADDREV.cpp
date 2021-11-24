#include <iostream>
using namespace std;
int reverse(int N)
{
    int rev = 0;
    while (N!=0)
    {
        rev = rev*10 + N%10;
        N = N/10;
    }
    return rev;
}
int main()
{
  int tc;
  scanf("%d", &tc);
  for(int i=1;i<=tc;i++)
  {
      int A,B;
      scanf("%d %d", &A, &B);
      printf("%d\n", reverse(reverse(A) + reverse(B)));
  }
  return 0;
}