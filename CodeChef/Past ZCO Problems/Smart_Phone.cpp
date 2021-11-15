#include <iostream>
#include <vector>

using namespace std;
#define ll long long int
int main()
{
     int N;
     scanf("%d",&N);
     std::vector<ll> v;
     ll a;
     for(int i=0;i<N;i++)
     {
          scanf("%lld",&a);
          v.push_back(a);
     }
     sort(v.begin(),v.end());
     ll max = 0;
     for(int i=0;i<v.size();i++)
     {
          if((v.size()-i)*v[i] > max)
           max = (v.size()-i)*v[i];
     }
     printf("%lld",max);
}
