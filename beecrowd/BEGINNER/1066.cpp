#include <iostream>
 
using namespace std;
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    int arr[5];
    int e=0,o=0,p=0,n=0;
    for(int i=0;i<5;i++)
    {
        cin >> arr[i];
        if(arr[i]%2==0)
         e++;
        else
         o++;
        if(arr[i]>0)
         p++;
        else
         n++;
    }
    printf("%d valor(es) par(es)\n",e);
    printf("%d valor(es) impar(es)\n",o);
    printf("%d valor(es) positivo(s)\n",p);
    printf("%d valor(es) negativo(s)\n",n);
    return 0;
}
