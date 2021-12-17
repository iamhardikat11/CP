#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;
int main()
{
    int N;
    cin >> N;
    int pos = 0;
    int min = INT_MAX;
    for(int i=0;i<N;i++)
    {
       int a;
       cin >> a;
       if(a<min)
       {
          min = a;
          pos = i;
       }
    }
    printf("Menor valor: %d\nPosicao: %d\n",min,pos);
    return 0;
}
