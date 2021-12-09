#include <iostream>

using namespace std;

int main() {

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    float  N;
    scanf("%f",&N);
    printf("NOTAS: \n");
    printf("%d ",(int)(N/100));
    N = N - 100*(int)(N/100);
    printf("nota(s) de R$ 100.00 \n");
    printf("%d ",(int)(N/50));
    N = N - 50*(int)(N/50);
    printf("nota(s) de R$ 50.00 \n");
    printf("%d ",(int)(N/20));
    N = N - 20*(int)(N/20);
    printf("nota(s) de R$ 20.00 \n");
    printf("%d ",(int)(N/10));
    N = N - 10*(int)(N/10);
    printf("nota(s) de R$ 10.00 \n");
    printf("%d ",(int)(N/5));
    N = N - 5*(int)(N/5);
    printf("nota(s) de R$ 5.00 \n");
    printf("%d ",(int)(N/2));
    N = N - 2*(int)(N/2);
    printf("nota(s) de R$ 2.00 \n");
    printf("MOEDAS: \n");
    printf("%d ",(int)(N/1));
    N = N-1*(int)(N/1);
    printf("moeda(s) de R$ 1.00 \n");
    printf("%d ",(int)(N/0.50));
    N = N-0.50*(int)(N/0.50);
    printf("moeda(s) de R$ 0.50 \n");
    printf("%d ",(int)(N/0.25));
    N = N-0.25*(int)(N/0.25);
    printf("moeda(s) de R$ 0.25 \n");
    printf("%d ",(int)(N/0.10));
    N = N-0.10*(int)(N/0.10);
    printf("moeda(s) de R$ 0.10 \n");
    printf("%d ",(int)(N/0.05));
    N = N-0.05*(int)(N/0.05);
    printf("moeda(s) de R$ 0.05 \n");
    printf("%d ",(int)(N/0.01));
    N = N-0.01*(int)(N/0.01);
    printf("moeda(s) de R$ 0.01 \n");
    return 0;
}
