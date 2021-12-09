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
    int a = N/3600;
    N = N%3600;
    int b = N/60;
    N = N%60;
    printf("%d:%d:%d\n",a,b,N);

    return 0;
}
