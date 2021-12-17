#include <iostream>
 
using namespace std;
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    double sum = 0.0;
    for(int i = 1; i<=100; i++) 
    {
        sum += (1.0)/(double)i;
    }
    printf("%.2lf\n", sum);
    return 0;
}
