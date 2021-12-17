#include <iostream>
#include <cmath> 
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
        sum += (double)(2*i-1)/(double)pow(2,i-1);
    }
    printf("%.2lf\n", sum);
    return 0;
}
