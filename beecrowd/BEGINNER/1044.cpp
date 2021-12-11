#include <iostream>
 
using namespace std;
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    int a,b;
    cin >> a >> b;
    if(b%a==0 || a%b==0)
     printf("Sao Multiplos\n");
    else
     printf("Nao sao Multiplos\n");
    return 0;
}
