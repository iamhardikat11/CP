#include <iostream>
 
using namespace std;
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    float arr[6];
    int count = 0;
    for(int i = 0;i<6;i++)
    {
        cin >> arr[i];
        if(arr[i]>0.0)
         count++;
    }
    printf("%d valores positivos\n",count);
    return 0;
}
