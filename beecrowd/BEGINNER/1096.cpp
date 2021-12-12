#include <iostream>

using namespace std;

int main() {

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    for(int i=1;i<=9;i+=2)
    {
        int k = 7;
        for(int j=0;j<=2;j++)
        {
            printf("I=%d J=%d\n",i,k-j);
        }
    }
    return 0;
}
