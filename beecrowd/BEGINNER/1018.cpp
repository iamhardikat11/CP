#include <iostream>

using namespace std;

int main() {

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    int N;
    scanf("%d",&N);
    printf("%d\n",N);
    printf("%d ",(N/100));
    N = N%100;
    printf("nota(s) de R$ 100,00\n");
    printf("%d ",(N/50));
    N =(N%50);
    printf("nota(s) de R$ 50,00\n");
    printf("%d ",(N/20));
    N = (N%20);
    printf("nota(s) de R$ 20,00\n");
    printf("%d ",(N/10));
    N = (N%10);
    printf("nota(s) de R$ 10,00\n");
    printf("%d ",(N/5));
    N = (N%5);
    printf("nota(s) de R$ 5,00\n");
    printf("%d ",(N/2));
    N =(N%2);
    printf("nota(s) de R$ 2,00\n");
    printf("%d ",(N));
    N = 0;
    printf("nota(s) de R$ 1,00\n");
    return 0;
}
