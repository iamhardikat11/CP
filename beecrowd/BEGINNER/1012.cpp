#include <iostream>
 
using namespace std;
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    double a,b,c;
    cin >> a >> b >> c;
    printf("TRIANGULO: %.3lf\n",0.50*a*c);
    printf("CIRCULO: %.3lf\n",3.14159*c*c);
    printf("TRAPEZIO: %.3lf\n",0.5*(a+b)*c);
    printf("QUADRADO: %.3lf\n",b*b);
    printf("RETANGULO: %.3lf\n",a*b);
    return 0;
}
