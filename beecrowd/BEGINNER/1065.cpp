#include <iostream>
 
using namespace std;
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    int arr[5];
    int c = 0;
    for(int i=0;i<5;i++)
    {
        cin >> arr[i];
        if(arr[i]%2==0)
         c++;
    }
    printf("%d valores pares\n",c);
    return 0;
}
