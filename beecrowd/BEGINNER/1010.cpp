#include <iostream>
 
using namespace std;
typedef struct
{
    int a,b;
    double c;
}info;
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    info one,two;
    cin >> one.a >> one.b >> one.c;
    cin >> two.a >> two.b >> two.c;
    printf("VALOR A PAGAR: R$ %.2lf\n",(one.b*one.c+two.b*two.c));
    return 0;
}
