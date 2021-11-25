#include <bits/stdc++.h>
using namespace std;

int numberOfVehicles(int districtCount, char alpha1, char alpha2, char alpha3, char alpha4, int dig1, int dig2, int dig3, int dig4) {
	// Write your code here.
    return districtCount*(alpha2-alpha1+1)*(alpha4-alpha3+1)*(dig1+1)*(dig2+1)*(dig3+1)*(dig4+1);
}
int main(void)
{
  int t;
  scanf("%d",&t);
  for(int i=0;i<t;i++)
  {
    int districtCount, dig1, dig2, dig3, dig4;
    char alpha1, char alpha2, char alpha3, char alpha4; 
    scanf("%d",&districtCount);
    scanf("%c %c %c %c",&alpha1, &alpha2, &alpha3, &alpha4);
    scanf("%d %d %d %d",&dig1, &dig2, &dig3, &dig4);
    printf("Case #",i+1,": %d",numberOfVehicles(numberOfVehicles, alpha1, alpha2, alpha3, alpha4, dig1, dig2, dig3, dig4,"\n");
  }
  return 0;
}
