//Link:-https://open.kattis.com/problems/aplusb
#include <iostream>
#include <cstdio>
int main() {
    int N;
    scanf("%d", &N);
    int arr[N];
    for (int i = 0; i < N; i++)
      scanf("%d", &arr[i]);
    int count=0;
    for(int i = 0;i< N;i++) 
    {
        for (int j = 0; j < N; j++)
        {
            for(int k = 0; k < N;k++)
            {
                if(arr[i]+arr[j]==arr[k] && i!=j)
                 count++;
            }
        }

    }
    printf("%d",count);
    return 0;
}