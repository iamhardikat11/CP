#include <iostream>
 
using namespace std;
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    int a=0,g=0,d=0;
    int i;
    cin >> i;
    while(i!=4)
    {
        if(i==1)
         a++;
        if(i==2)
         g++;
        if(i==3)
         d++;
        cin >> i;
    }
    printf("MUITO OBRIGAD\n");
    printf("Alcool: %d\n",a);
    printf("Gasolina: %d\n",g);
    printf("Diesel: %d\n",d);
    return 0;
}
