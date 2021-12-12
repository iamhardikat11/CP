#include <iostream>

using namespace std;

int main() {

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    float X;
    cin >> X;
    if(X>=0 && X<=2000.00)
        printf("Isento\n");
    else if(X>2000.00 && X<=3000.00)
        printf("R$ %.2f\n",(0.08*(X-2000.00)));
    else if(X>3000.00 && X<=4500.00)
        printf("R$ %.2f\n",(80.00+0.18*(X-3000.00)));
    else
        printf("R$ %.2f\n",(350.00+0.28*(X-4500.00)));
    return 0;
}
