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
    int a = N/365;
    N = N%365;
    int b = N/30;
    N = N%30;
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",a,b,N);
    return 0;
}
