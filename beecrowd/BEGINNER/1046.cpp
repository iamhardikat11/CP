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
    if(b>a)
     printf("O JOGO DUROU %d HORA(S)\n",(b-a));
    else if(a==b)
     printf("O JOGO DUROU %d HORA(S)\n",24);
    else
     printf("O JOGO DUROU 10 HORA(S)\n",(24-a+b));
    return 0;
}
