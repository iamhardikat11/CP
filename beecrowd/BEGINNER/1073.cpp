#include <iostream>
#include <cmath>
using namespace std;

int main() {

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    int N;
    cin >> N;
    for(int i=2;i<=N;i+=2)
     printf("%d^2 = %6d\n",i,(int)pow(i,2));
    return 0;
}
