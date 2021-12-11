#include <iostream>
#include <cmath>
using namespace std;
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    double a,b,c;
    cin >> a >> b >> c;
    if(a>=b+c)
     printf("NAO FORMA TRIANGULO\n");
    if(pow(a,2)==pow(b,2)+pow(c,2))
     printf("TRIANGULO RETANGULO\n");
    if(pow(a,2)>pow(b,2)+pow(c,2))
     printf("TRIANGULO OBTUSANGULO\n");
    if(pow(a,2)<pow(b,2)+pow(c,2))
     printf("TRIANGULO ACUTANGULO\n");
    if(a==b && b==c)
     printf("TRIANGULO EQUILATERO\n");
    if((a==b && a!=c)|| (b==c && a!=c) || (c==a && b!=a))
     printf("TRIANGULO ISOSCELES\n");
    return 0;
}
