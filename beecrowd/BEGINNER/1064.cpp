#include <iostream>
 
using namespace std;
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    int count = 0;
    float arr[6];
    float sum =0;
    for(int i=0;i<6;i++)
    {
        cin >> arr[i];
        if(arr[i]>0)
        {
            count++;
            sum+=arr[i];
        }
    }
    printf("%d valores positivos\n%.1f\n",count,sum/count);
    return 0;
}
