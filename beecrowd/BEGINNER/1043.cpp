#include <iostream>
 
using namespace std;
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    float a,b,c;
    cin >> a >> b >> c;
    if(a+b>c && a+c>b && b+c>a)
     printf("Perimetro = %.1f\n",(a+b+c));
    else
     printf("Area = %.1f\n",(0.5*(a+b)*c));
    return 0;
}
