//Link:-https://www.codeabbey.com/index/task_view/selection-sort
#include <iostream>
#include <vector>
using namespace std;
void swap(int *a,int *b)
{
  int t=*a;
  *a=*b;
  *b=t;
}
int main()
{
  int n;
  cin>>n;
  vector<int> v;
  for(int i=0;i<n;i++)
  {
    int N; cin>>N;
    v.push_back(N);
  }
  for(int i=0;i<n-1;i++)
  {
    int max=v[0]; int index=0;
    for(int j=0;j<n-i;j++)
    {
      if(v[j]>max)
      {
        max=v[j];
        index=j;
      }
    }
    swap(&v[n-i-1],&v[index]);
    cout<<index<<" ";
  }
 return 0;
}
