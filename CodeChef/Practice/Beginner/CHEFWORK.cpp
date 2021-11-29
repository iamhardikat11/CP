#include <bits/stdc++.h>
using namespace std;
int min_cost(vector<int> t,vector<int> c,int N,int ch)
{
  int min = 1e5;
  for(int i=0;i<N;i++)
  {
     if(t[i]==ch)
     {
       if(min>c[i])
         min = c[i];
     }
  } 
  return min;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
        int N;
        scanf("%d",&N);
        vector<int> c;
        vector<int> t;
        int a;
        for(int i=0;i<N;i++)
        {
             scanf("%d",&a);
             c.push_back(a);
        }
        for(int j=0;j<N;j++)
        {
             scanf("%d",&a);
             t.push_back(a);
        }
        if(min_cost(t,c,N,1)+min_cost(t,c,N,2)>min_cost(t,c,N,3))
         printf("%d\n",min_cost(t,c,N,3));
        else
         printf("%d\n",min_cost(t,c,N,1)+min_cost(t,c,N,2));
        
}
