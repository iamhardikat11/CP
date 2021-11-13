//Link:-https://www.codeabbey.com/index/task_view/weighted-sum-of-digits
#include <iostream>
using namespace std;
int reverse(int n)
{
    int rev=0;
    while(n!=0)
    {
        int r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    return rev;
}
int wsd(int n)
{
  int i=1;
  int sum=0;
  while(n!=0)
  {
      int r=n%10;
      sum=sum+r*i;
      n=n/10;
      i++;
  }
  return sum;
}
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
      cin>>n;
      n=reverse(n);
      cout<<wsd(n)<<" ";
    }
    return 0;
}
